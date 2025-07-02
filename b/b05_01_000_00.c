BGOpen("tr410",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,2,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B050100000_01_001");
MsgDisp("Kazama","This amusement park has quite the
history...");
MsgDisp("主人公","Yeah.
But, the number of new attractions
just keep on increasing.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B050100000_01_011");
MsgDisp("Kazama","Are you the PR guy here?");
MsgDisp("主人公","Hehe.
It's because I used to come here a lot 
with my family when I was younger.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("B050100000_01_021");
MsgDisp("Kazama","I see. Well, if I hadn't gone to England,
we would've come here many times as well
right?");
MsgDisp("主人公","Yeah, maybe.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B050100000_01_031");
MsgDisp("Kazama","What do you mean \"Maybe\"
...Geez. Alright, let's make up 
for that today okay?");
MsgDisp("主人公","Yeah!");
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr410",1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ScrFadeIn(0);
VoicePlay("B050100000_01_041");
MsgDisp("Kazama","Hey, there's still time huh?
Come this way with me.");
MsgClose();
SEPlay("EV_SE_504");
Wait(30,0);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","Eh?");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.5);
MsgClose();
ScrFadeOut(0);
SEWait();
MsgClose();
ChOpen(1,255,1,0,3,-1,-1,5,0,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEPlay("EV_SE_AMUSE_004");
Wait(90,0);
SEStop("EV_SE_AMUSE_004",2);
MsgClose();
Wait(20,0);
BGOpen("tr431",1);
BGMPlay("BGM_C01_RYOUTA_I",0.01);
ScrFadeIn(0);
SEPlay("EV_SE_084",0);
Wait(30,0);
MsgDisp("主人公","...｛風真＊＊｝, 
do you like ferris wheels?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("B050100000_01_010");
MsgDisp("Kazama","It's almost time.
The chance for ehen the gondola 
reaches the top...");
SEPlay("EV_SE_544");
MsgClose();
ScrFadeOut(0,0,30);
SEPlay("EV_SE_623",0.3,0.5);
SEPlay("EV_SE_616",0,0.5);
Wait(25,0);
ChClose(1,0,30);
MsgDisp("主人公","Waa, that's dangerous!");
MsgClose();
StlOpen("ev_01_02");
StlEye(1,0);
StlMouth(1,0);
StlCheek(1,10);
ScrFadeIn(0,30);
SEPlay("EV_SE_AMUSE_005",0,1);
ScrQuake(2);
VoicePlay("B050100000_01_020");
MsgDisp("Kazama","Ah, sorry...");
MsgDisp("主人公","That gave me a fright... It's dangerous to
get up so suddenly you know?");
StlEye(1,0);
StlEyeOpenLevel(1,5,1);
StlMouth(1,0);
StlCheek(1,5);
VoicePlay("B050100000_01_030");
MsgDisp("Kazama","T-that's right.");
MsgDisp("主人公","...Ah, we're almost at the top!");
StlEyeOpenLevel(1,0,1);
Wait(1,0);
StlEye(1,1);
StlMouth(1,1);
StlCheek(1,0);
VoicePlay("B050100000_01_040");
MsgDisp("Kazama","Yeah, this is the best place.");
StlEye(1,2);
StlEyeOpenLevel(1,5,1);
StlMouth(1,0);
VoicePlay("B050100000_01_050");
MsgDisp("Kazama","...Geez, what am I doing.
EVen though this isn't something you 
need to resolve yourself to do.");
MsgDisp("主人公","What?");
StlEyeOpenLevel(1,0,1);
Wait(1,0);
StlEye(1,1);
StlMouth(1,1);
VoicePlay("B050100000_01_060");
MsgDisp("Kazama","Hey, look.
It's beautiful.");
MsgDisp("主人公","Yeah.
Hanegasaki sea is sparkling...");
MsgClose();
ScrFadeOut(0);
StlClose();
VoicePlay("B050100000_01_070");
MsgDisp("Kazama","Seeing you happy is enough for me.");
Wait(20,0);
BGMVol(0.5,2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr430",1);
MsgClose();
ChOpen(1,255,0,0,3,-1,-1,0,0);
Wait(10,0);
ScrFadeIn(0);
MsgDisp("主人公","Haa, that was fun.
｛風真＊＊｝, do you enjoy ferris wheels?");
ChClose(1,0,30);
ChLayout(0);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(1,255,0,4,3,-1,-1,0,0,0,30);
VoicePlay("B050100000_01_080");
MsgDisp("Kazama","Maybe I will, starting from today.");
SEPlay("EV_SE_551",0.5,0.5,0.1);
Wait(10,0);
MsgClose();
ScrFadeOut(0,0,30);
SEWait();
Wait(10,0);
ChMotion(1,0);
SEPlay("EV_SE_505");
MsgDisp("","
Smooch");
ChEye(1,0);
ChCheek(1,5);
MsgClose();
SEPlay("EV_SE_675",0.3,0.4);
Wait(20,0);
ScrFadeIn(0,30);
Wait(30,0);
MsgDisp("主人公","∋");
MsgDisp("主人公","Eh, just now on my forehead....");
ChEye(1,4);
ChMouth(1,4);
VoicePlay("B050100000_01_090");
MsgDisp("Kazama","Is there a problem?");
MsgDisp("主人公","Umm, I was surprised...");
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("B050100000_01_100");
MsgDisp("Kazama","Actually I was thinking the ferris wheel 
ride was kind of juvenile.");
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B050100000_01_110");
MsgDisp("Kazama","But with you here,
anything feels right.");
MsgDisp("主人公","｛風真＊＊｝, everyone is watching...");
SEPlay("EV_SE_GAYA_019",0,0.9);
SEPlay("EV_SE_FOOT_WALK_KEEP_ALONE",0.1,0.5,0.5);
ChClose(1,0,30);
ChLayout(1);
MsgClose();
SEStop("EV_SE_FOOT_WALK_KEEP_ALONE",0.1);
SEPlay("EV_SE_544",0,1);
ChOpen(1,255,5,5,1,-1,-1,7,0,0,30);
VoicePlay("B050100000_44_000");
MsgDisp("Boy","Just now they kissed!");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
ChCheek(1,10);
VoicePlay("B050100000_45_000");
MsgDisp("Girl","Mommy, 
these two just kissed.");
ChEye(1,4);
VoicePlay("B050100000_49_000");
MsgDisp("Mom","It's not good to stare.");
ChEye(1,2);
ChMouth(1,4);
ChMotion(1,4);
ChEyeOpenLevel(1,0);
VoicePlay("B050100000_01_120");
MsgDisp("Kazama","...Come to think of it, the ferris wheel
was supposed to be for avoiding 
the public gaze.");
MsgDisp("主人公","……");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChCheek(1,7);
VoicePlay("B050100000_01_130");
MsgDisp("Kazama","Whoeevr runs away from
here fastest wins.");
MsgDisp("主人公","Ehhh∋");
SEPlay("EV_SE_504");
Wait(30,0);
SEPlay("EV_SE_FOOT_RUN_AWAY_TWO");
ChClose(1,0,30);
SEStop("EV_SE_GAYA_019",1);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChOpen(1,255,0,0,0,-1,-1,0,0,0,0);
SEWait();
ChPrmTblAdd(1,0);
