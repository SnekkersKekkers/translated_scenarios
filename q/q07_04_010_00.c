BGMPlay("BGM_PLACE_TRAVEL",0.01);
BGOpen("sc820",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Amazing...... Flowers and nice buildings
spread out, It's like being in a foreign
country!");
VoicePlay("Q070401000_04_000");
MsgDisp("Nanatsumori","............");
VoicePlay("Q070401000_04_010");
MsgDisp("Nanatsumori","Y'know......");
MsgClose();
ScrFadeOut(0);
StlOpen("ev_04_14");
StlEye(4,1);
StlMouth(4,1);
ScrFadeIn(0);
VoicePlay("Q070401000_04_020");
MsgDisp("Nanatsumori","I underestimated school trips!
They're the best∈");
MsgDisp("主人公","Yeah, they're the best!");
StlEye(4,1);
StlMouth(4,1);
VoicePlay("Q070401000_04_030");
MsgDisp("Nanatsumori","I underestimated school events.
Fr, it's OP.");
MsgDisp("主人公","Hehe!");
StlEye(4,1,0);
StlMouth(4,1);
StlEyeOpenLevel(4,5,1);
VoicePlay("Q070401000_04_040");
MsgDisp("Nanatsumori","I knew it, coming with you was a great
decision.");
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
BGOpen("sc820",0);
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("Q070401000_04_050");
MsgDisp("Nanatsumori","I really thought it would be boring and
troublesome, the school trip.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("Q070401000_04_060");
MsgDisp("Nanatsumori","I mean, I'm a super indoor person. We're
going to unfamiliar places, and we're
supposed to write stupid reports......");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("Q070401000_04_070");
MsgDisp("Nanatsumori","I thought it was only a troublesome thing.
Until a while ago.");
MsgDisp("主人公","Is that so?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("Q070401000_04_080");
MsgDisp("Nanatsumori","Ye.");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("Q070401000_04_090");
MsgDisp("Nanatsumori","But I thought if I could be with you, It
might be different.
I got really excited.");
MsgDisp("主人公","I'm having so much fun right now too!");
ChEye(4,0);
ChMouth(4,3);
VoicePlay("Q070401000_04_100");
MsgDisp("Nanatsumori","I'm having more fun than you.
I want to shout as loud as I can right
here, right now.");
MsgDisp("主人公","What are you going to shout?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,3,1);
VoicePlay("Q070401000_04_110");
MsgDisp("Nanatsumori","I......");
MsgDisp("主人公","Yes.");
MsgClose();
ScrFadeOut(0);
ChClose(4);
StlOpen("ev_04_14");
StlEye(4,0);
StlMouth(4,0);
ScrFadeIn(0);
VoicePlay("Q070401000_04_120");
MsgDisp("Nanatsumori","Love———∈");
MsgDisp("主人公","(Ehhh, what do you like so much that you
want to scream～∋)");
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
StlClose();
ChClose(4,0,0);
ChPrmTblAdd(4,0);
