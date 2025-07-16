ChEye(4,2);
ChMouth(4,4);
BGMStop();
MsgDisp("主人公","I'm sorry......
I......");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("T020411000_04_180");
MsgDisp("Nanatsumori","...... I got it.
It's okay.");
MsgDisp("主人公","｛七ツ森＊｝......");
BGMPlay("BGM_C04_NANA_B",0.01);
Wait(40,0);
ChMotion(4,0,1);
VoicePlay("T020411000_04_190");
MsgDisp("Nanatsumori","I'm sorry.
I didn't mean to cause you to make that
face......");
VoicePlay("T020411000_04_200");
MsgDisp("Nanatsumori","I won't interfere with your destiny
anymore.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,3,1);
VoicePlay("T020411000_04_210");
MsgDisp("Nanatsumori","Thank you for coming.
This is farewell......");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(4,0,0);
Wait(120);
