BGMStop();
MsgDisp("主人公","I'm sorry......");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
ChCheek(1,0);
VoicePlay("T020111000_01_200");
MsgDisp("Kazama","......N-No it's okay.");
BGMPlay("BGM_C01_RYOUTA_C",0.01);
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("T020111000_01_210");
MsgDisp("Kazama","It was here, where we reunited, that I was
able to face you for the first time.
Thank you.");
MsgDisp("主人公","No, thank you too.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("T020111000_01_220");
MsgDisp("Kazama","Thanks to this, I was able to see a little
bit of my own work, not just my dad's or
my grandpa's.");
MsgDisp("主人公","｛風真＊＊｝......");
ChMotion(1,0,1);
Wait(12,0);
ChEyeOpenLevel(1,8);
VoiceEVSPlay(1);
VoicePlay("T020111000_01_230");
MsgDisp("Kazama","｛主人公｝, You were my everything.");
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("T020111000_01_240");
MsgDisp("Kazama","Thank you.
...I won't move on.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(1,0,0);
Wait(120);
