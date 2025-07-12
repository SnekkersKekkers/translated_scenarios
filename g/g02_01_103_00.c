MsgClose();
ChOpen(1,255,0,0,2,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020110300_01_000");
MsgDisp("Kazama","Are fireflies supposed to be this
colorful?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("G020110300_01_010");
MsgDisp("Kazama","With all these different colored lights
floating around us, see, it's like we're
slowly spinning......");
MsgDisp("主人公","Yeah, it's like a ferris wheel.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110300_01_020");
MsgDisp("Kazama","Yeah.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110300_01_030");
MsgDisp("Kazama","......Speaking of ferris wheels, remember
the one at Habataki Land Town?");
MsgDisp("主人公","Oh......yeah. The one where you kissed me
on the forehead...... It was embarrassing
with everyone watching.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020110300_01_040");
MsgDisp("Kazama","Though a kiss on the forehead is even less
of a big deal than saying hello in the UK.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("G020110300_01_050");
MsgDisp("Kazama","But I'll admit there were a bit too many
people in the audience.");
MsgDisp("主人公","Yeah......");
ChMotion(1,0);
ChEyeOpenLevel(1,8);
Wait(10,0);
ChEye(1,2);
ChMouth(1,3);
VoicePlay("G020110300_01_060");
MsgDisp("Kazama","When I did that, I had a bunch of immature
schemes rolling around in my head.");
ChClose(1,0,30);
ChLayout(0);
SEPlay("EV_SE_544");
SEWait();
MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0,0,30);
VoicePlay("G020110300_01_070");
MsgDisp("Kazama","Here I can be more debonair about it.");
MsgDisp("主人公","What!");
MsgClose();
ScrFadeOut(0,0,30);
EfctClose();
SEPlay("EV_SE_505");
MsgDisp("","
kiss");
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
EfctOpen(7);
ScrFadeIn(0);
VoicePlay("G020110300_01_080");
MsgDisp("Kazama","See?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G020110300_01_090");
MsgDisp("Kazama","Looks like we've got an audience here too.");
MsgDisp("主人公","(That caught me by surprise...... What's
up with ｛風真＊＊｝ today?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
EfctClose();
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
