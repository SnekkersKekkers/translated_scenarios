BGOpen("fp100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
MsgClose();
ChClose(1,0,0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B330A30300_47_000");
MsgDisp("Woman Customer A","Amazing, I got to see Kazama-kun!");
VoicePlay("B330A30300_48_000");
MsgDisp("Woman Customer B","I heard you weren't on shift today though.");
ChMotion(2,4);
VoicePlay("B330A30300_01_000");
MsgDisp("Kazama","I came to do some personal shopping today.
See you then.");
VoicePlay("B330A30300_47_010");
MsgDisp("Woman Customer A","Ehhh～,you're leaving?");
MsgDisp("主人公","｛風真＊＊｝...is super popular huh.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
VoicePlay("B330A30300_06_000");
MsgDisp("Himuro","Is this why he said he didn't want to go
too close to the store he works part
time...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,1);
VoicePlay("B330A30300_02_000");
MsgDisp("Sassa","Inori, let's rescue him.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
VoicePlay("B330A30300_06_010");
MsgDisp("Himuro","Right. It's also partly our responsibility
for dragging him around. You wait here a
second.");
MsgClose();
SEPlay("EV_SE_856");
ChClose(6,0,30);
ChClose(2,0,30);
VoicePlay("B330A30300_02_010");
MsgDisp("Sassa","Ryota.");
VoicePlay("B330A30300_06_020");
MsgDisp("Himuro","Excuse me, Ryota-senpai!");
VoicePlay("B330A30300_47_020");
MsgDisp("Woman Customer A","He called him \"Ryota-senpai\".
That's kind of cute.");
VoicePlay("B330A30300_48_010");
MsgDisp("Woman Customer B","Yeah, the red glasses are stylish too.");
VoicePlay("B330A30300_06_030");
MsgDisp("Himuro","...Eh?");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChLayout(2);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
ChOpen(6,255,0,0,0,#1,#1,0,3,0,30);
ChOpen(1,255,0,2,2,0,#1,0,3,0,30);
SEPlay("EV_SE_544");
ChOpen(2,255,3,0,4,#1,#1,0,3,0,30);
VoicePlay("B330A30300_02_020");
MsgDisp("Sassa","Sorry to have kept you waiting.");
MsgDisp("主人公","No, it's fine.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0,1);
VoicePlay("B330A30300_01_010");
MsgDisp("Kazama","Sorry. Sassa and Inori helped me out
but...Inori basically got caught in the
second half right?");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B330A30300_06_040");
MsgDisp("Himuro","Yeah.
I don't really get it.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("B330A30300_02_030");
MsgDisp("Sassa","You're sharing Ryota's popularity; the
second star shop assistant at Simon's.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,8);
VoicePlay("B330A30300_06_050");
MsgDisp("Himuro","What's with that.. please stop...");
MsgDisp("主人公","If ｛風真＊＊｝ and ｛氷室＊＊｝ worked
together, things might get out of hand?");
ChEye(1,2);
ChMouth(1,2);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ChEyeOpenLevel(2,7);
VoicePlay("B330A30300_02_040");
MsgDisp("Sassa","Couldn't I work there too?");
ChMouth(1,0);
ChEyeOpenLevel(1,0);
MsgDisp("主人公","Hehe, I see.
Then, the three of you.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,7);
VoicePlay("B330A30300_02_050");
MsgDisp("Sassa","What's with that?
Even you're in on it now.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B330A30300_02_060");
MsgDisp("Sassa","Alright, star 1 and 2, let's go.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("B330A30300_01_020");
MsgDisp("Kazama","Don't call me something weird.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_MANY");
ChClose(1,0,30);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330A30300_06_060");
MsgDisp("Himuro","Don't get sulky over something like this.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_MANY");
ChClose(6,0,30);
ChClose(2,0,30);
MsgDisp("主人公","(Hehe!
Seems like we'll finally be able to ddo
some shopping now.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChOpen(6,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(6,3);
ChOpen(1,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(1,3);
ChOpen(2,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(2,3);
