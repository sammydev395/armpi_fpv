#!/usr/bin/env python3
# coding=utf8
# 第13章 ArmPi FPV创意玩法课程\3.语音交互玩法课程\第3课 语音模块测试\3.树莓派语音交互实验(13. creative AI application course\3. voice interaction course\lesson 3 voice module test\3. Raspberry Pi voice interaction experiment)
import time
from armpi_fpv_common.asr import ASR
from armpi_fpv_common.tts import TTS

asr = ASR()

#添加的词条和识别模式是可以掉电保存的，第一次设置完成后，可以将1改为0(the added entries and recognition mode can be saved even after power-off, after the initial setup, you can change 1 to 0)
if 1:
    asr.eraseWords()
    asr.setMode(2)
    asr.addWords(1, 'kai shi')
    asr.addWords(2, 'ni hao')
    asr.addWords(3, 'ni shi shui')
while 1:
    data = asr.getResult()
    if data == 2:
        print("你好，Hi wonder")
        v = TTS()
        #[h?]设置单词发音方式，0为自动判断单词发音方式，1为字母发音方式，2为单词发音方式([h?]set the pronunciation mode for words: 0 for automatic determination of pronunciation mode, 1 for letter-by-letter pronunciation mode, 2 for word pronunciation mode)
        #[v?]设置音量，音量范围为0-10,10为最大音量。([v?]set the volume, with a range of 0 to 10, where 10 is the maximum volume)
        v.TTSModuleSpeak("[h2][v10]", "你好，Hiwonder")
        time.sleep(3) # 必要延时，等待播放完成(necessary delay to wait for playback completion)
    if data == 3:
        print("我是Arm Pi FPV") 
        v = TTS()
        v.TTSModuleSpeak("[h2][v10]", "我是ArmPi FPV")
        time.sleep(3) # 必要延时，等待播放完成(necessary delay to wait for playback completion)
    time.sleep(0.01)
