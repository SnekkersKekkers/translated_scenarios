BGMStop();
ChLayout(1);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(This year we're displaying wedding
dresses. This is my last cultural
festival...I have to make it a success!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(31,254,4,0,0,#1,#1,0,0);
VoicePlay("P733100002_31_000");
MsgDisp("Goro","Hey～, adorable, waa▼");
MsgDisp("主人公","Ah, Goro-sensei!
It's an honour you came to watch.");
ChEye(31,4);
ChMouth(31,4);
ChMotion(31,1);
VoicePlay("P733100002_31_010");
MsgDisp("Goro","Yep yep.
When I see your dress, I could cry a bit.");
MsgDisp("主人公","Ehhh?");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,1);
VoicePlay("P733100002_31_020");
MsgDisp("Goro","It's truly wonderful.
You did well.");
SEPlay("EV_SE_038");
SEWait();
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,2);
VoicePlay("P733100002_31_030");
MsgDisp("Goro","Have fun.
The world's best bride♪");
MsgDisp("主人公","Yes!");
MsgClose();
ScrFadeOut(0);
ChClose(31,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
