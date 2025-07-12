BGOpen("sc350",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
Wait(20,0);
VoicePlay("D010700000_07_000");
MsgDisp("Mikage","Alright.
Once you're finished taking notes, you
can leave.");
SEPlay("EV_SE_666",0.8,0.6);
VoicePlay("D010700000_42_000");
MsgDisp("Male Student","It's over, time for food!");
VoicePlay("D010700000_44_000");
MsgDisp("School Girl","Let's go to the cafeteria!");
MsgDisp("主人公","(Phew......
I'm not really hungry.)");
SEStop("EV_SE_666",2);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(7,37,0,0,0,#1,#1,0,0);
VoiceEVSPlay(7);
VoicePlay("D010700000_07_010");
MsgDisp("Mikage","｛主人公｝, please come to the science
lab prep room after lunch～");
MsgDisp("主人公","Ah, yes sir.");
SEStop("EV_SE_SCHOOL_002",1.5);
MsgClose();
ScrFadeOut(0);
ChClose(7);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_DOOR_024");
SEWait();
MsgDisp("主人公","Excuse me.");
SEPlay("EV_SE_DOOR_013");
BGOpen("sc351",0);
MsgClose();
ChOpen(7,37,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
SEWait();
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("D010700000_07_020");
MsgDisp("Mikage","Haha, you got here quickly.");
MsgDisp("主人公","Ah, yeah......Sorry.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("D010700000_07_030");
MsgDisp("Mikage","Hey, what are you apologizing for?
Wait here a second.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
Wait(30,0);
VoicePlay("D010700000_07_040");
MsgDisp("Mikage","You seem a bit tired lately.");
MsgDisp("主人公","(I guess so......)");
VoicePlay("D010700000_07_050");
MsgDisp("Mikage","Alright, it's ready.
Thanks for waiting♪");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_746");
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C07_MIKAGE_I",0.01);
StlOpen("ev_07_08");
StlEye(7,0);
StlMouth(7,0);
ScrFadeIn(0);
Wait(30,0);
MsgDisp("主人公","Wow......It's delicious.
This tea has such a beautiful color......");
StlEye(7,0);
StlMouth(7,0);
StlEyeOpenLevel(7,5);
VoicePlay("D010700000_07_060");
MsgDisp("Mikage","It's Hibiscus tea. It's a great source 
of vitamin C, gives you energy, and
beautiful skin.");
MsgDisp("主人公","Thank you so much.
It's both sweet and sour......
And very relaxing.");
StlEye(7,0);
StlMouth(7,0);
VoicePlay("D010700000_07_070");
MsgDisp("Mikage","It's my own recipe, so I drizzled a
little honey in there.");
StlEye(7,0);
StlMouth(7,0);
StlEyeOpenLevel(7,0);
VoicePlay("D010700000_07_080");
MsgDisp("Mikage","Drink it slowly. It will warm your
stomach and increase your appetite.");
MsgDisp("主人公","Come to think of it......I'm getting a
bit hungry now——");
StlEye(7,0);
StlMouth(7,1);
SEPlay("EV_SE_017");
MsgDisp("","(Growl～)");
StlEye(7,0);
StlMouth(7,0);
VoicePlay("D010700000_07_090");
MsgDisp("Mikage","It's super effective.
You're easy to read, huh?");
MsgDisp("主人公","Ugh......How embarrassing.");
StlEye(7,1);
StlMouth(7,0);
VoicePlay("D010700000_07_100");
MsgDisp("Mikage","It was a compliment.
There should still be some bread left
in the cafeteria. Let's go.");
MsgDisp("主人公","Okay......!");
BGMStop();
MsgClose();
ScrFadeOut(0);
StlClose();
SEPlay("EV_SE_080");
MsgDisp("主人公","(Weird......
Thanks to ｛御影＊＊｝, I feel like I got 
some strength back!)");
MsgClose();
SEStop("EV_SE_080");
PlPrmTblAdd(71);
ChPrmTblAdd(7,0);
