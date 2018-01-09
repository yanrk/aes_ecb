# arguments
platform = x64



# paths home
project_home       = .
bin_dir            = $(project_home)/bin/linux/$(platform)
object_dir         = $(project_home)/.objs
aes_ecb_home           = $(project_home)/..



# includes of aes_ecb headers
aes_ecb_inc_path   = $(aes_ecb_home)/inc
aes_ecb_includes   = -I$(aes_ecb_inc_path)

# includes of local headers
local_inc_path     = $(project_home)
local_includes     = -I$(local_inc_path)

# all includes that local solution needs
includes           = $(aes_ecb_includes)
includes          += $(local_includes)



# source files of local solution
local_src_path     = $(project_home)
local_source       = $(filter %.cpp, $(shell find $(local_src_path) -depth -name "*.cpp"))



# objects of local solution
local_objects      = $(local_source:$(project_home)%.cpp=$(object_dir)%.o)



# aes_ecb librarys
aes_ecb_lib_inc    = $(aes_ecb_home)/lib/linux/$(platform)
aes_ecb_libs       = -L$(aes_ecb_lib_inc) -laes_ecb

# local depends librarys
depend_libs        = $(aes_ecb_libs)



# output execution
output_exec        = $(bin_dir)/aes_ecb_test



# my g++ not support nullptr and 64bits
# so no -m64, and add a macro -Dnullptr=0

# build flags for objects
build_obj_flags    = -std=c++0x -g -Wall -O1 -pipe -fPIC -Dnullptr=0

# build flags for execution
build_exec_flags   = $(build_obj_flags)



# build targets

# let 'build' be default target, build all targets
build    : $(local_objects)
	@echo
	@echo "@@@@@  start making aes_ecb_test  @@@@@"
	g++ $(build_exec_flags) -o $(output_exec) $^ $(depend_libs)
	@echo "@@@@@  make aes_ecb_test success  @@@@@"
	@echo

cpfile   :
	@cp $(aes_ecb_lib_inc)/* $(bin_dir)/

run      : cpfile
	@export LD_LIBRARY_PATH=$(LD_LIBRARY_PATH):$(bin_dir) && $(output_exec)
# it same as: @env LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:$(bin_dir) $(output_exec)

# build all objects
$(object_dir)/%.o:$(project_home)/%.cpp
	@dir=`dirname $@`;      \
    if [ ! -d $$dir ]; then \
        mkdir -p $$dir;     \
    fi
	g++ -c $(build_obj_flags) $(includes) -o $@ $<

clean    :
	rm -rf $(object_dir) $(output_exec)

rebuild  : clean build
