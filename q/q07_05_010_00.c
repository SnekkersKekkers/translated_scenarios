BGOpen("sc824",0);
BGMStop();
ScrFadeIn(0);
MsgDisp("主人公","(Phew, I bought a lot of souvenirs!
But where did ｛柊＊＊＊｝ go?)");
SEPlay("EV_SE_771");
SEWait();
MsgDisp("主人公","(Ah...... A cute sound!
It's from that shop. I should take a 
peek!)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.6);
MsgClose();
ScrFadeOut(0,0);
SEWait();
MsgDisp("主人公","(Eh? That's......)");
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_C",0.01);
StlOpen("ev_05_14");
StlEye(5,2);
ScrFadeIn(0);
SEPlay("EV_SE_777",0,0.9);
Wait(150,1);
SEStop("EV_SE_777",0.1);
StlEye(5,0);
VoicePlay("Q070501000_05_000");
MsgDisp("Hiiragi","Nice tone......");
VoicePlay("Q070501000_34_000");
MsgDisp("Clerk","Customer, you are very good at painting 
and blowing. I'd love to have it as a 
part of our product.");
StlEyeOpenLevel(5,5,1);
VoicePlay("Q070501000_05_010");
MsgDisp("Hiiragi","Thank you.
I hope the person I'll be presenting
will also be pleased——");
StlEye(5,0,1);
SEPlay("EV_SE_777",0,0.9);
Wait(150,1);
SEStop("EV_SE_777",0.1);
MsgDisp("主人公","｛柊＊＊＊｝！");
StlEye(5,3);
VoicePlay("Q070501000_05_020");
MsgDisp("Hiiragi","Eh......");
SEPlay("EV_SE_777",0,0.9);
Wait(150,1);
SEStop("EV_SE_777",0.1);
StlEye(5,1);
VoicePlay("Q070501000_05_030");
MsgDisp("Hiiragi","...... I have been found.");
MsgDisp("主人公","Eh?");
MsgClose();
ScrFadeOut(0,0);
StlClose();
BGMVol(0.5,2);
BGOpen("sc825",0);
MsgClose();
ChOpen(5,254,4,4,4,0,-1,0,0);
Wait(15,0);
ScrFadeIn(0);
VoicePlay("Q070501000_05_040");
MsgDisp("Hiiragi","It can't be helped.
The staging should be changed a bit......");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("Q070501000_05_050");
MsgDisp("Hiiragi","This beadlo, is for you.");
MsgDisp("主人公","Ah...... thanks!
So pretty......!");
ChEye(5,4);
ChMotion(5,3);
Wait(20,1);
VoicePlay("Q070501000_05_060");
MsgDisp("Hiiragi","Yes, it matches mine.
I have decorated it with holly leaves.");
MsgDisp("主人公","It's pretty......");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("Q070501000_05_070");
MsgDisp("Hiiragi","Holly leaves have long been used as
It has also been used to ward off evil.");
ChEye(5,4);
VoicePlay("Q070501000_05_080");
MsgDisp("Hiiragi","As a souvernir of the school trip and 
your good luck charm.");
MsgDisp("主人公","｛柊＊＊＊｝……");
ChEye(5,3);
ChMotion(5,0);
VoicePlay("Q070501000_05_090");
MsgDisp("Hiiragi","Could you try blowing it?");
MsgDisp("主人公","Eh...... s, sure!");
ChEye(5,4);
ChEyeOpenLevel(5,0);
Wait(30,1);
SEPlay("EV_SE_777",0,0.8);
Wait(150,1);
SEStop("EV_SE_777",0.1);
Wait(40,1);
ChEyeOpenLevel(5,-1);
VoicePlay("Q070501000_05_100");
MsgDisp("Hiiragi","I wonder why......
Your sound, sounds cute.");
Wait(40,1);
ChEye(5,0);
ChMotion(5,4);
VoicePlay("Q070501000_05_110");
MsgDisp("Hiiragi","Ah, it's time.
Shall we go?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
BGMStop(2);
MsgClose();
ScrFadeOut(0,0);
Wait(60,0);
MsgDisp("主人公","( ｛柊＊＊＊｝ ......
Thanks for the nice gift......)");
MsgClose();
Wait(40,0);
MsgClose();
ChOpen(5,254,0,0,0,-1,-1,0,0,0,0);
ChPrmTblAdd(5,0);
