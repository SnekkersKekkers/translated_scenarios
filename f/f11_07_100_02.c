ChLayout(1);
BGOpen("sc710",0);
ScrFadeIn(0);
MsgDisp("主人公","(It looks like a lot of people brought
their family this year.
Everyone seems like they're having fun!)");
VoicePlay("F110710002_44_000");
MsgDisp("Boy","I want to go to the zoo again.
The zookeeper guy was super interesting.");
VoicePlay("F110710002_49_000");
MsgDisp("Woman","That's true.
Let's go.");
VoicePlay("F110710002_44_010");
MsgDisp("Boy","Yippee!
Quickly!");
SEPlay("EV_SE_FOOT_RUN_AWAY_TWO");
SEWait();
MsgDisp("主人公","(...zoo?)");
MsgClose();
ChOpen(7,37,0,0,0,#1,#1,0,0);
VoiceEVSPlay(7);
VoicePlay("F110710002_07_000");
MsgDisp("Mikage","｛主人公｝, are you having
fun?");
MsgDisp("主人公","Oh, ｛御影＊＊｝.
Um, that outfit...");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("F110710002_07_010");
MsgDisp("Mikage","The Kojiro Mobile Zoo is back.");
MsgDisp("主人公","Um, is that alright?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F110710002_07_020");
MsgDisp("Mikage","Don't worry. I'm only looking after
animals. The horseback instructor is
taking care of the ranch.");
MsgDisp("主人公","Oh, are you the zookeeper?
The one that boy from earlier said was
super interesting.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("F110710002_07_030");
MsgDisp("Mikage","Oh, I guess so.");
MsgDisp("主人公","Ah, then I'll let you go back early.
That boy said he would be running back.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F110710002_07_040");
MsgDisp("Mikage","Well, then I'd better go.
Ah, you should come too if you have time.
The goat and I will look forward to it.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgDisp("主人公","(Haha, typical
｛御影＊＊｝. Both the
adults and the kids are having fun. Should
I go later, too?)");
MsgClose();
ScrFadeOut(0,0);
