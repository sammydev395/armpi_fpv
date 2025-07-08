#!/usr/bin/python3
# coding=utf8
# 第13章 ArmPi FPV创意玩法课程\3.语音交互玩法课程\第3课 语音模块测试\2.树莓派语音合成实验（13. creative AI application course\3. voice interaction course\lesson 3 voice module test\1. Raspberry Pi voice synthesis experiment）
import time
from armpi_fpv_common import tts

v = tts.TTS()
#[h0]设置单词发音方式，0为自动判断单词发音方式，1为字母发音方式，2为单词发音方式([h0]set the pronunciation mode for words: 0 for automatic determination of pronunciation mode, 1 for letter-by-letter pronunciation mode, 2 for word pronunciation mode)
#[v10]设置音量，音量范围为0-10,10为最大音量。（[v10]set the volume, with a range of 0 to 10, where 10 is the maximum volume）
#注意括号里的字符长度不能超过32,如果超过了请分多次来说（please note that the character length inside the parentheses should not exceed 32, if it exceeds, please split it into multiple parts）
v.TTSModuleSpeak("[h0][v10]","你好,我是语音合成模块")
time.sleep(3) # 必要延时，等待播放完成(necessary delay to wait for playback completion)
v.TTSModuleSpeak("[v8]", "你好，我是语音合成模块")
time.sleep(3)
v.TTSModuleSpeak("[v3]", "你好，我是语音合成模块")
