BGOpen("sc500",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Alright, 
...it's about time to go home)");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(3,254,0,0,0,-1,-1,0,0);
MsgDisp("主人公","Ah,｛本多＊＊｝.");
ChEye(3,1);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("F100620001_03_000");
MsgDisp("Honda","Shh.");
MsgDisp("主人公","Eh?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("F100620001_03_010");
MsgDisp("Honda","Let's not tell anyone
that I'm here, okay?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(3);
MsgDisp("主人公","Eh, why is he hiding?");
VoiceEVSPlay(6);
VoicePlay("F100620001_06_000");
MsgDisp("Himuro?","｛主人公｝.");
MsgDisp("主人公","Ah!
｛氷室＊＊｝......");
MsgClose();
ChOpen(6,254,0,0,0,-1,-1,0,0);
VoicePlay("F100620001_06_010");
MsgDisp("Himuro","Who were you talking to just now?");
MsgDisp("主人公","Umm... myself?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("F100620001_06_020");
MsgDisp("Himuro","Ah, I see.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100620001_06_030");
MsgDisp("Himuro","By the way, are you free after this?
If you'd like——");
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
ChPosition(6,1);
MsgClose();
SEWait();
ChOpen(3,254,3,3,3,-1,-1,0,2);
VoicePlay("F100620001_03_020");
MsgDisp("Honda","Yes, yees!
I'm also free!");
ChEye(6,3);
ChMouth(6,0);
ChMotion(6,5);
VoicePlay("F100620001_06_040");
MsgDisp("Himuro","∋");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("F100620001_03_030");
MsgDisp("Honda","Nori-kun, are you free after school?
Then let's go to the ramen shop today!");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3);
ChEyeOpenLevel(3,0);
VoiceEVSPlay(3);
VoicePlay("F100620001_03_040");
MsgDisp("Honda","｛主人公｝,
you too!");
MsgDisp("主人公","Eh, me too?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEyeOpenLevel(6,7);
VoicePlay("F100620001_06_050");
MsgDisp("Himuro","Haa, you just decide
everything by yourself...");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("F100620001_03_050");
MsgDisp("Honda","If we all eat together, it'll
taste even more delicious?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3);
VoicePlay("F100620001_03_060");
MsgDisp("Honda","Alright, let's go!");
MsgDisp("主人公","(I know he suddenly barged in but, 
I'm kind of excited for the ramen 
shop ｛本多＊＊｝ likes so much?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
