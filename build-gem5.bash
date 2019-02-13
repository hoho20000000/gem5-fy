#!/bin/bash
export CXX=/opt/rh/devtoolset-2/root/usr/bin/g++
export CC=/opt/rh/devtoolset-2/root/usr/bin/cc
GEM5_MODE=opt

##list of build commands to be used
default_build="scons ./build/X86_MOESI_hammer/gem5.$GEM5_MODE PROTOCOL=MOESI_hammer RUBY=True -j 10"
multicore_ruby_build="scons build/X86_MESI_Two_Level/gem5.$GEM5_MODE PROTOCOL=MESI_Two_Level RUBY=True -j 10"
multicore_ruby_build2="scons build/X86_MESI_Three_Level/gem5.$GEM5_MODE PROTOCOL=MESI_Three_Level RUBY=True -j 10"
declare -a build_cmds=("$default_build" "$multicore_ruby_build" "$multicore_ruby_build2")

index=0
if [[ $# < 1 ]]
then
	echo "Choose a build cmd using index:"
	for cmd in "${build_cmds[@]}"
	do
		echo "$index: $cmd"
	    ((index++))
	done
else
     index=$1
     echo executing ${build_cmds[index]}
#	 scons build/X86/gem5.opt PROTOCL=MESI_CMP_directory RUBY=True -j 10
     eval ${build_cmds[index]}
fi
##to build the basic  configuration of x86 with default protocl
##clean targets
#scons -c
