##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=exercise1_mandlebrot
ConfigurationName      :=Debug
WorkspacePath          :=/home/arrjai/Dropbox/cpp/data_structures
ProjectPath            :=/home/arrjai/Dropbox/cpp/data_structures/exercise1_mandlebrot
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=
Date                   :=01/13/18
CodeLitePath           :=/home/arrjai/.codelite
LinkerName             :=/usr/bin/clang++
SharedObjectLinkerName :=/usr/bin/clang++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="exercise1_mandlebrot.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/clang++
CC       := /usr/bin/clang
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/complex_number.cpp$(ObjectSuffix) $(IntermediateDirectory)/PPMFile.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/arrjai/Dropbox/cpp/data_structures/exercise1_mandlebrot/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/complex_number.cpp$(ObjectSuffix): complex_number.cpp $(IntermediateDirectory)/complex_number.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/arrjai/Dropbox/cpp/data_structures/exercise1_mandlebrot/complex_number.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/complex_number.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/complex_number.cpp$(DependSuffix): complex_number.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/complex_number.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/complex_number.cpp$(DependSuffix) -MM complex_number.cpp

$(IntermediateDirectory)/complex_number.cpp$(PreprocessSuffix): complex_number.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/complex_number.cpp$(PreprocessSuffix) complex_number.cpp

$(IntermediateDirectory)/PPMFile.cpp$(ObjectSuffix): PPMFile.cpp $(IntermediateDirectory)/PPMFile.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/arrjai/Dropbox/cpp/data_structures/exercise1_mandlebrot/PPMFile.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PPMFile.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PPMFile.cpp$(DependSuffix): PPMFile.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PPMFile.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PPMFile.cpp$(DependSuffix) -MM PPMFile.cpp

$(IntermediateDirectory)/PPMFile.cpp$(PreprocessSuffix): PPMFile.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PPMFile.cpp$(PreprocessSuffix) PPMFile.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


