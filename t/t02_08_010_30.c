BGMStop();
ChEye(8,3);
ChMouth(8,4);
ChEyeOpenLevel(8,10);
MsgDisp("主人公","I'm sorry...");
VoicePlay("T020801000_08_360");
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,4,1);
ChEyeOpenLevel(8,0);
ChMouthOpenLevel(8,0);
ChCheek(8,0);
MsgDisp("Shirahane","......");
BGMPlay("BGM_C08_DAICHI_B",0.01);
Wait(60);
VoicePlay("T020801000_08_370");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,2,1);
MsgDisp("Shirahane","First love never comes true, huh?
Even with the help of the lighthouse
legend, I guess it was impossible.");
VoicePlay("T020801000_08_380");
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,0,1);
MsgDisp("Shirahane","But...thank you, really.");
VoicePlay("T020801000_08_390");
MsgDisp("Shirahane","Thanks to you, my high school life was so
fun.");
VoicePlay("T020801000_08_400");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
ChEyeOpenLevel(8,0);
MsgDisp("Shirahane","If it's okay with you, let's be friends
and meet again some day.");
MsgDisp("主人公","｛大地＊＊｝...");
VoicePlay("T020801000_08_410");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
MsgDisp("Shirahane","When my heart grows up, I'm sure I'll be
able to meet you again whilst laughing.");
VoicePlay("T020801000_08_420");
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,4,1);
MsgDisp("Shirahane","So that's all for today.
Goodbye...");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(8,0,0);
Wait(120);
