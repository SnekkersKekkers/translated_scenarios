MsgClose();
ChOpen(1,255,0,0,2,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020110300_01_000");
MsgDisp("Kazama","Were fireflies always this colorful?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("G020110300_01_010");
MsgDisp("Kazama","Different colors of light floating around,
slowly rotating like a ferris wheel......");
MsgDisp("主人公","Yeah, it's like a ferris wheel.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110300_01_020");
MsgDisp("Kazama","Isn' it.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110300_01_030");
MsgDisp("Kazama","...... Speaking of which...
Remember that time at the \"Habakaki Land
Town\" ferris wheel?");
MsgDisp("主人公","Ah......yeah. ｛風真＊＊｝, you
kissed my forehead...... Everyone saw, it
was so embarrassing.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020110300_01_040");
MsgDisp("Kazama","Kissing on the forehead is less than a
greeting in England.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("G020110300_01_050");
MsgDisp("Kazama","But yeah, there were too many people
watching.");
MsgDisp("主人公","Yeah......");
ChMotion(1,0);
ChEyeOpenLevel(1,8);
Wait(10,0);
ChEye(1,2);
ChMouth(1,3);
VoicePlay("G020110300_01_060");
MsgDisp("Kazama","At that time, I was planning things like a
kid.");
ChClose(1,0,30);
ChLayout(0);
SEPlay("EV_SE_544");
SEWait();
MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0,0,30);
VoicePlay("G020110300_01_070");
MsgDisp("Kazama","Here, I can be smoother.");
MsgDisp("主人公","Eh!");
MsgClose();
ScrFadeOut(0,0,30);
EfctClose();
SEPlay("EV_SE_505");
MsgDisp("","(Smooch)");
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
EfctOpen(7);
ScrFadeIn(0);
VoicePlay("G020110300_01_080");
MsgDisp("Kazama","Right?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G020110300_01_090");
MsgDisp("Kazama","There are people watching here too.");
MsgDisp("主人公","(I'm surprised...... what's up with
｛風真＊＊｝ today?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
EfctClose();
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
