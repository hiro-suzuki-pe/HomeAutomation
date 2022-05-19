# (1)コンパイラ
CC  = gcc
CPP = g++
AR  = ar
MAKE = make

# (2)コンパイルオプション
CFLAGS = 

# (3)実行ファイル名
TARGET  = LightControllerTest.exe

# (4)コンパイル対象のソースコード
CC_SRCS    = LightControllerSpy.c  LightScheduler.c FakeTimeService.c
CPP_SRCS   = allTests.cpp LightSchedulerTest.cpp LightControllerSpyTest.cpp FakeTimeServiceTest.cpp

# (5)オブジェクトファイル名
CC_OBJS    = $(CC_SRCS:.c=.o)
CPP_OBJS    += $(CPP_SRCS:.cpp=.o)
 
# (6)インクルードファイルのあるディレクトリパス
INCDIR  = -I. -I..\cpputest\include
LIBDIR  =

# (8)追加するライブラリファイル
LIBS    = 

# (10)オブジェクトファイル生成
#.c.o: 
#	$(CC_SRCS) $(CFLAGS) -c $<  $(INCDIR)
#	$(CPP_SRCS) $(CFLAGS) -c $<  $(INCDIR)
$(CC_OBJS):	$(CC_SRCS)
	$(CC) $(CFLAGS) -c $(CC_SRCS)  $(INCDIR)

$(CPP_OBJS): $(CPP_SRCS)
	$(CPP) $(CFLAGS) -c $(CPP_SRCS)  $(INCDIR)

# (9)ターゲットファイル生成
$(TARGET):	$(CC_OBJS) $(CPP_OBJS)
	$(CC) -o $(TARGET)  $(CC_OBJS) $(CPP_OBJS)


# (11)"make all"で make cleanとmakeを同時に実施。
all: clean $(CC_OBJS) $(CPP_OBJS) $(TARGET)

# (12).oファイル、実行ファイルを削除
clean:
	del $(TARGET) 