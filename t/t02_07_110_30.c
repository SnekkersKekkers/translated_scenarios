BGMStop();
MsgDisp("主人公","I'm sorry...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("T020711030_07_000");
MsgDisp("Mikage","I see.
I'm sorry for making you apologize even at
the very end.");
BGMPlay("BGM_C07_MIKAGE_B",0.01);
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("T020711030_07_010");
MsgDisp("Mikage","You were always in the right.");
MsgDisp("主人公","｛御影＊＊｝...");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,0,1);
ChEyeOpenLevel(7,10);
VoicePlay("T020711030_07_020");
MsgDisp("Mikage","Thank you.
Thanks to you, I can move forward.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("T020711030_07_030");
MsgDisp("Mikage","I, along with Molly, wish you happiness.");
MsgDisp("主人公","｛御影＊＊｝...");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("T020711030_07_040");
MsgDisp("Mikage","Finally, I want to see that serious,
precious smile.");
MsgDisp("主人公","Yes...");
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("T020711030_07_050");
MsgDisp("Mikage","See you then.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(7,0,0);
Wait(120);
