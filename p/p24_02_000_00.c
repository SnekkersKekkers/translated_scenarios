BGMStop();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChClose(2,0,0);
BGMPlay("BGM_ENGEKI_B",0.01);
StlOpen("ev_02_15");
StlEye(2,0);
StlMouth(2,0);
ScrFadeIn(0);
VoicePlay("P240200000_02_000");
MsgDisp("Sassa","Persephone, 
why won't you laugh?");
MsgDisp("主人公","How am I supposed to laugh when I'm
imprisoned in the depths of the earth?
Please return me to my world.");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,0);
VoicePlay("P240200000_02_010");
MsgDisp("Sassa","I can't do that.");
MsgDisp("主人公","...Then I will cry, 
I will continue to await help.");
StlEye(2,1,0);
StlMouth(2,1);
StlEyeOpenLevel(2,5,1);
VoicePlay("P240200000_02_020");
MsgDisp("Sassa","...That will not come true.
The gatekeeper of hell, Cerebus 
will not tolerate intruders.");
SEPlay("EV_SE_678",0,1);
Wait(100,0);
SEStop("EV_SE_678",1.5);
MsgDisp("主人公","Then, I will escape myself.");
SEPlay("EV_SE_675",0.3,0.6);
Wait(70,0);
SEPlay("EV_SE_FOOT_001",0.3,0.5);
Wait(60,0);
StlEye(2,1);
StlMouth(2,0);
SEStop("EV_SE_FOOT_001",1.9);
VoicePlay("P240200000_02_030");
MsgDisp("Sassa","Wait!");
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc742",0);
BGMVol(0.5,2);
ChOpen(2,38,5,1,1,-1,-1,0,0);
Wait(60);
ScrFadeIn(0);
VoicePlay("P240200000_02_040");
MsgDisp("Sassa","You have tasted the pomegranate of the
underworld, I cannot let you return.");
MsgDisp("主人公","Ah, please let me go!
Hades-sama...");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("P240200000_02_050");
MsgDisp("Sassa","Don't cry.
I regret forcing you into my world.");
ChEyeOpenLevel(2,0);
MsgDisp("主人公","(... Eh?
｛颯砂＊＊｝, isn't that a bit off-script?)");
SEPlay("EV_SE_GAYA_008",0.5,0.5);
VoicePlay("P240200000_39_000");
MsgDisp("Male Customer","Eh, that's somewhat off?");
VoicePlay("P240200000_47_000");
MsgDisp("Woman Customer","Yeah isn't the line wrong?");
SEStop("EV_SE_GAYA_008",2);
SEPlay("EV_SE_680");
Wait(80);
SEStop("EV_SE_680",1);
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,0);
SEPlay("EV_SE_681");
Wait(90);
SEStop("EV_SE_681",0.2);
SEPlay("EV_SE_679",0,0.9);
MsgDisp("","(Arf! Arf! Arf!)");
MsgDisp("主人公","(Ah, the dogs came to play...!)");
MsgDisp("主人公","Ah, help me～!");
SEPlay("EV_SE_GAYA_006",0,0.8);
Wait(60,0);
ChEye(2,1);
ChMouth(2,1);
ChMotion(2,5);
SEStop("EV_SE_GAYA_006",2);
VoicePlay("P240200000_02_060");
MsgDisp("Sassa","Stop, Cerebus!");
SEPlay("EV_SE_680",0.3,0.9);
Wait(100,0);
SEStop("EV_SE_680",1);
SEPlay("EV_SE_681");
Wait(90,0);
SEStop("EV_SE_681",2);
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("P240200000_02_070");
MsgDisp("Sassa","There there, good boy.");
ChEye(2,1);
ChMouth(2,1);
ChMotion(2,3);
VoicePlay("P240200000_02_080");
MsgDisp("Sassa","Don't hurt that person!");
VoicePlay("P240200000_39_020");
MsgDisp("Male Customer","They weren't hurt at all.");
SEPlay("EV_SE_GAYA_006",0,0.8);
Wait(50,0);
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
SEStop("EV_SE_GAYA_006",2);
VoicePlay("P240200000_02_090");
MsgDisp("Sassa","No, for that beautiful smile is the
only light in my melancholy world.
A most precious treasure.");
MsgDisp("主人公","Hades-sama.");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("P240200000_02_100");
MsgDisp("Sassa","If detaining you in this underworld 
sullens your beautiful face, 
then I shall send you back to earth.");
ChEye(2,2);
ChMouth(2,2);
ChMotion(2,2);
ChEyeOpenLevel(2,0);
VoicePlay("P240200000_02_110");
MsgDisp("Sassa","However, if you pity me, stay with me a
month each year only for each pomegranate
seed you have eaten.");
MsgDisp("主人公","Yes......");
SEPlay("EV_SE_681",0,0.9);
Wait(50,0);
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("P240200000_02_120");
MsgDisp("Sassa","There there.
Isn't it great, Cerebus?
Persephone will stay with us.");
SEStop("EV_SE_681",1);
VoicePlay("P240200000_49_000");
MsgDisp("Narrator","Persephone was then drawn to Hades'
sincerity and wanted to marry the king 
of the underworld.");
MsgClose();
SEPlay("EV_SE_GAYA_021",0,0.9);
SEPlay("EV_SE_CLAP_002");
BGMStop(2);
ScrFadeOut(0);
ChClose(2,0,0);
Wait(100,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEStop("EV_SE_CLAP_002",1.5);
SEStop("EV_SE_GAYA_021",1.5);
BGOpen("sc740",0);
MsgClose();
ChOpen(2,38,4,0,4,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("P240200000_02_130");
MsgDisp("Sassa","It's changed direction, but it's become
more interesting thanks to the Cerberus'.");
MsgDisp("主人公","Hehe, maybe?");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("P240200000_02_140");
MsgDisp("Sassa","...Hey, 
Am I forcibly dragging you into
this like Hades is? ");
MsgDisp("主人公","Eh? 
What are you talking about?");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("P240200000_02_150");
MsgDisp("Sassa","I wonder if I could give up 
on you for the sake of your smile too.");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("P240200000_02_160");
MsgDisp("Sassa","Phew... Maybe I got a bit too emotionally
immersed. I'll see you later.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
MsgDisp("主人公","(｛颯砂＊＊｝...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(2,0);
