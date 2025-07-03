ChLayout(1);
SEPlay("EV_SE_836");
SEWait();
MsgDisp("主人公","｛本多＊＊｝, what does it say?");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("S110300001_03_000");
MsgDisp("Honda","Very Bad Luck......");
MsgDisp("主人公","Eehh∋
......Will you be okay?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("S110300001_03_010");
MsgDisp("Honda","Yeah, it surprised me though.
I remembered an anecdote my mom told
me a long time ago.");
MsgDisp("主人公","What kind of anecdote?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("S110300001_03_020");
MsgDisp("Honda","If you have very bad luck, you will
be more cautious to avoid small disasters.
So keep it in mind and keep safe.");
MsgDisp("主人公","(｛本多＊＊｝ 's mother sounds amazing.
She even turns Bad Luck into a positive
thing......)");
ChEyeOpenLevel(3,-1);
ChCheek(3,0);
