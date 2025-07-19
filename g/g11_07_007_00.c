BGOpen("sc210",0);
ScrFadeIn(0);
MsgDisp("主人公","(Ahh, this is such nice weather...
Ah, I need to move classrooms in the
afternoon, I have to prepare in advance.)");
VoiceEVSPlay(7);
VoicePlay("G110700700_07_000");
MsgDisp("Mikage?","｛主人公｝.");
MsgClose();
ScrFadeOut(0);
BGOpen("ev007",0);
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛御影＊＊｝.
Do you look after the plants on your lunch
break too?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700700_07_010");
MsgDisp("Mikage","Well yeah, even if I come just to check it
out, I end up getting my hands dirty
anyways.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700700_07_020");
MsgDisp("Mikage","Even a slight change in weather can be a
big deal for plants, as they can't move.");
MsgDisp("主人公","So you always have to be mindful and keep
an eye on them, right?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700700_07_030");
MsgDisp("Mikage","That's right. It's easy to tell when an
animal is in a bad mood, like Momo at the
farm the other day.");
MsgDisp("主人公","Hehe.
｛御影＊＊｝ can understand the
feelings of both plants and animals.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700700_07_040");
MsgDisp("Mikage","You're saying such kind things.
Well, I wish that were the case.");
SEPlay("EV_SE_SCHOOL_002");
MsgClose();
ScrFadeOut(0);
ChClose(7);
MsgClose();
SEPlay("EV_SE_628",0.2);
Wait(30,0);
BGOpen("sc210",0);
ChOpen(7,37,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700700_07_050");
MsgDisp("Mikage","Oh, that's the warning bell.
Go get ready for the next class.");
MsgDisp("主人公","Yes.
But, next up is ｛御影＊＊｝'s biology
class, isn't it?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("G110700700_07_060");
MsgDisp("Mikage","Ah, that's right, isn't it?
Then, shall we go together?");
MsgDisp("主人公","｛御影＊＊｝ are you going in those
clothes?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("G110700700_07_070");
MsgDisp("Mikage","Hmm? No, this won't do. Vice Principal
Himuro will give me a good scolding.");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
BGMStop();
ChClose(7);
MsgDisp("主人公","(Hehe ｛御影＊＊｝, Are you going to
make in time for class?)");
SEStop("EV_SE_SCHOOL_002",1);
MsgClose();
ScrFadeOut(0,0);
