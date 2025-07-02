BGOpen("sc310",0);
ScrFadeIn(0);
MsgDisp("主人公","(Today I'm a senior.
I hope I can make good memories this
year too......)");
VoicePlay("D010100002_01_000");
MsgDisp("Kazama?","The year just started and you
already have that serious look on
your face, huh?");
MsgClose();
ScrFadeOut(0,0);
BGMPlay("BGM_C01_RYOUTA_I",0.01);
StlOpen("ev_01_07");
StlEye(1,1);
StlMouth(1,1);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛風真＊＊｝......Wait.
No way, we're in the same class this
year too?");
StlEye(1,0);
StlMouth(1,0);
VoicePlay("D010100002_01_010");
MsgDisp("Kazama","Seems so.
We can't say it's just a coincidence
anymore.");
MsgDisp("主人公","Yeah, to be together all three years
like this, is it only us two like this?");
MsgClose();
ScrFadeOut(0,0);
StlClose();
BGOpen("sc310",0);
ChLayout(1);
MsgClose();
ChOpen(1,254,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("D010100002_01_020");
MsgDisp("Kazama","Of course not.
There has to be others like us.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("D010100002_01_030");
MsgDisp("Kazama","Hmm?　No wait,......I swear there were
others.");
MsgDisp("主人公","Eh——");
MsgClose();
BGMStop(1.5);
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
Wait(40,0);
ChPrmTblAdd(1,0);
