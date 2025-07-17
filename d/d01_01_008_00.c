BGOpen("wf700",2);
ScrFadeIn(0);
MsgDisp("主人公","(Ah, there are pinwheels...)");
VoicePlay("D010100800_01_000");
MsgDisp("Kazama","Excuse me, I'd like to get this orange
one.");
MsgClose();
ScrFadeOut(0);
StlOpen("ev_01_04");
StlEye(1,0);
StlMouth(1,0);
BGMPlay("BGM_C01_RYOUTA_C",0.01);
ScrFadeIn(0);
VoicePlay("D010100800_01_010");
MsgDisp("Kazama","There are so many of them, but this is the
only one that's orange.");
StlEye(1,1);
StlEyeOpenLevel(1,5,1);
MsgDisp("主人公","Yeah, it's the last one.");
StlEyeOpenLevel(1,#1);
VoicePlay("D010100800_01_020");
MsgDisp("Kazama","Items choose their owners.
So I'm sure this one must have been
waiting for us.");
MsgClose();
ScrFadeOut(0);
StlClose();
BGOpen("wf700",2);
ChLayout(1);
MsgClose();
ChOpen(1,33,7,0,3,#1,#1,0,0);
BGMVol(0.5,2);
ScrFadeIn(0);
MsgDisp("主人公","Can we please see them together again next
year?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("D010100800_01_030");
MsgDisp("Kazama","You can make your wish now.");
MsgDisp("主人公","Eh?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("D010100800_01_040");
MsgDisp("Kazama","For me, I wish that I'm no longer such a
child that has to obey the demands of my
parents.");
SEPlay("EV_SE_022",0.5);
Wait(30,0);
ChEye(1,3);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("D010100800_01_050");
MsgDisp("Kazama","Damn, we have to hurry.
Or our secret spot will get taken by
others.");
MsgDisp("主人公","O-Okay.");
SEStop("EV_SE_022",2);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D010100800_01_060");
MsgDisp("Kazama","Don't make that face.
Come on, let's go.");
MsgDisp("主人公","(｛風真＊＊｝ will go somewhere else
again...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(1,0,0);
ChPrmTblAdd(1,0);
