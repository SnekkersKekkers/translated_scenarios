BGOpen("sc310",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_SCHOOL_002");
MsgDisp("主人公","(The weather is nice today so let's have
lunch on the rooftop!)");
SEStop("EV_SE_SCHOOL_002",1);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc231",0);
SEPlay("EV_SE_DOOR_011",0,1);
Wait(80,0);
ScrFadeIn(0);
SEWait();
MsgDisp("主人公","No one's here so......
I'll have the rooftop all to myself
today♪");
VoicePlay("D010600100_06_000");
MsgDisp("Himuro?","Unfortunately, that's not the case.");
MsgDisp("主人公","Eh?");
BGMPlay("BGM_C06_INORI_A",0.01);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(6,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛氷室＊＊｝, are you having your lunch
up here too?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D010600100_06_010");
MsgDisp("Himuro","Yeah.
......Alright, time to get started.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6);
SEWait();
SEPlay("EV_SE_622");
SEWait();
VoicePlay("D010600100_06_020");
MsgDisp("Himuro","Itadakimasu.");
MsgClose();
ScrFadeOut(0);
StlOpen("ev_06_07");
StlEye(6,0);
StlMouth(6,0);
EfctOpen(14);
ScrFadeIn(0);
MsgDisp("主人公","......Hey, is that maybe all you're having
for lunch?");
StlEye(6,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5);
VoicePlay("D010600100_06_030");
MsgDisp("Himuro","Is that bad?");
MsgDisp("主人公","It's not bad but......
Maybe a bit surprising.");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,0,1);
VoicePlay("D010600100_06_040");
MsgDisp("Himuro","Did you expect me to eat some healthy,
nutritionally balanced meal like a good
honor student?");
MsgDisp("主人公","I did.");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("D010600100_06_050");
MsgDisp("Himuro","That's some fine prejudice.");
MsgDisp("主人公","But in terms of nutrition, maybe it would
be better to add some side dishes?");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("D010600100_06_060");
MsgDisp("Himuro","There are sides.
Look, eggs, green onions.");
MsgDisp("主人公","(He sounds like a little kid......)");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("D010600100_06_070");
MsgDisp("Himuro","The dehydrated eggs and vegetables
regained some moisture from soaking in the
broth.");
MsgDisp("主人公","Geez. Right, maybe you would like to have
the side from my lunch?");
StlEye(6,1);
StlMouth(6,0);
VoicePlay("D010600100_06_080");
MsgDisp("Himuro","......If you're giving it to me, I'll eat
it.
Give it here.");
MsgClose();
ScrFadeOut(0);
EfctClose();
StlClose();
MsgDisp("主人公","Sure, here you go.");
SEPlay("EV_SE_623",0.8);
SEWait();
VoicePlay("D010600100_06_090");
MsgDisp("Himuro","Thanks for the——");
BGMStop();
MsgClose();
ScrFadeIn(0);
ChOpen(6,254,0,3,0,#1,#1,0,0);
VoicePlay("D010600100_06_100");
MsgDisp("Himuro","............∈");
ChEye(6,3);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D010600100_06_110");
MsgDisp("Himuro","T-This, eggplant——");
MsgDisp("主人公","Yeah, it's grilled eggplant.
It's in season right now and really
delicious.");
BGMPlay("BGM_HANYOU_C",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,8);
VoicePlay("D010600100_06_120");
MsgDisp("Himuro","Ew, eggplant!
I'm giving this back!
Take it, quickly!");
MsgDisp("主人公","Eh?");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,1);
ChEyeOpenLevel(6,8);
VoicePlay("D010600100_06_130");
MsgDisp("Himuro","Hurry!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEyeOpenLevel(6,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","......Am I bad at cooking eggplant.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChCheek(6,5);
VoicePlay("D010600100_06_140");
MsgDisp("Himuro","Not really.
It's not that you're bad at it, I just
don't have the nerve to eat it.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,8);
ChCheek(6,0);
VoicePlay("D010600100_06_150");
MsgDisp("Himuro","It's black on the outside and white on the
inside, and when it gets heated up, the
texture becomes gross and mushy.");
MsgDisp("主人公","Are you trying to say that you......
hate eggplant?");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("D010600100_06_160");
MsgDisp("Himuro","I wouldn't say hate, it just has issues.");
MsgDisp("主人公","(｛氷室＊＊｝ hates eggplant......I think.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
ChPrmTblAdd(6,0);
