BGOpen("sc132",1);
ChLayout(2);
ScrFadeIn(0);
MsgDisp("主人公","(Huh......It's snowing, huh?
I need to watch my step on the way home.)");
VoicePlay("D010600400_06_000");
MsgDisp("Himuro?","You're slow.
How long were you going to make me wait?");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(6,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Eh, ｛氷室＊＊｝? What's up?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D010600400_06_010");
MsgDisp("Himuro","I was waiting for you.");
VoicePlay("D010600400_40_000");
MsgDisp("Male Student A","Damn, how dare you?
Time for payback!");
SEPlay("EV_SE_632");
SEWait();
VoicePlay("D010600400_41_010");
MsgDisp("Male Student B","Haha, no shot-wait
Look out!");
MsgDisp("主人公","Ah, ｛氷室＊＊｝ ∈");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_633");
ChClose(6,0,0);
MsgClose();
ChLayout(1);
StlOpen("ev_06_10");
EfctOpen(13);
SEWait();
MsgClose();
StlEye(6,1);
StlMouth(6,1);
BGMPlay("BGM_C06_INORI_I",0.01);
ScrFadeIn(0);
VoicePlay("D010600400_06_020");
MsgDisp("Himuro","......Who was it?
Do you have something against me?");
StlEye(6,1);
StlMouth(6,1);
VoicePlay("D010600400_06_030");
MsgDisp("Himuro","But it's pointless.
It won't work against me......");
MsgDisp("主人公","(Woah...... ｛氷室＊＊｝ caught the
snowball!)");
VoicePlay("D010600400_40_020");
MsgDisp("Male Student A","My bad, Himuro!
My hand slipped!");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("D010600400_06_040");
MsgDisp("Himuro","......Hmph.
This is nothing.");
VoicePlay("D010600400_41_030");
MsgDisp("Male Student B","I guess that's exactly what you'd expect
from Himuro?");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("D010600400_06_050");
MsgDisp("Himuro","......Huh?");
VoicePlay("D010600400_41_040");
MsgDisp("Male Student B","Legend has it that once Vice Principal
Himuro caught a blackboard eraser before
it fell on his head——");
StlEye(6,1);
StlMouth(6,0);
VoicePlay("D010600400_06_060");
MsgDisp("Himuro","How does that catch just now have anything
to do with that?");
VoicePlay("D010600400_41_050");
MsgDisp("Male Student B","It's because——");
StlEye(6,1);
StlMouth(6,1);
StlEyeOpenLevel(6,0);
VoicePlay("D010600400_06_070");
MsgDisp("Himuro","............");
VoicePlay("D010600400_41_060");
MsgDisp("Male Student B","......Ugh, sorry.");
StlEye(6,1);
StlMouth(6,0);
VoicePlay("D010600400_06_080");
MsgDisp("Himuro","It's fine.
That'll be all.");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
EfctClose();
BGOpen("ex980",0);
BGOpen("sc132",1);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(6,254,2,1,0,0,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Isn't catching a snowball like that kind
of amazing?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,8);
VoicePlay("D010600400_06_090");
MsgDisp("Himuro","Are you thinking about Reiichi-san too
when you say that?");
MsgDisp("主人公","Of course not!
It's just like I'd expect from you.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,5);
VoicePlay("D010600400_06_100");
MsgDisp("Himuro","......Ah, I see.
That's fine then.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D010600400_06_110");
MsgDisp("Himuro","Anyway, let's go home quickly.
I've been waiting for a while and it's
cold.");
MsgDisp("主人公","Ah, sorry!
......Wait, when did we make plans to walk
home together?");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("D010600400_06_120");
MsgDisp("Himuro","It's fine isn't it?
We made them just now.");
MsgDisp("主人公","Ehh?");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
ChPrmTblAdd(6,0);
