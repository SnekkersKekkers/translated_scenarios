ChEye(4,4);
ChMouth(4,4);
BGMStop();
MsgDisp("主人公","I'm sorry......
I......");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,0,1);
VoicePlay("T020420000_04_310");
MsgDisp("Nanatsumori","Ah......don't cry. Please.");
MsgDisp("主人公","But......");
BGMPlay("BGM_C04_NANA_B",0.01);
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("T020420000_04_320");
MsgDisp("Nanatsumori","It's no one's fault, right?
Not you, not me.
Not even those guys.");
ChMotion(4,0,1);
VoicePlay("T020420000_04_330");
MsgDisp("Nanatsumori","Right.
So, laugh.");
MsgDisp("主人公","Yes......");
ChEye(4,4);
ChMouth(4,4);
VoicePlay("T020420000_04_340");
MsgDisp("Nanatsumori","Well, we have to get out of here anyway.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("T020420000_04_350");
MsgDisp("Nanatsumori","Let's leave with a smile so they don't
worry.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,3,1);
VoiceEVSPlay(4);
VoicePlay("T020420000_04_360");
MsgDisp("Nanatsumori","｛主人公｝...... Thank you for the last
three years.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(4,0,0);
Wait(120);
