BGMStop();
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf200",0);
ChClose(3,0,0);
ScrFadeIn(0);
SEPlay("EV_SE_855",1,0.6);
VoicePlay("B050300101_45_000");
MsgDisp("Girl","Ah, it's the Quiz King!");
VoicePlay("B050300101_44_000");
MsgDisp("Boy","For real!
Quiz King, there are a bunch of crabs in
the rocks over there.");
VoicePlay("B050300101_03_000");
MsgDisp("Honda","Yeppers, where are they?");
SEStop("EV_SE_855",3);
MsgDisp("主人公","(Hehe, the kids captured
｛本多＊＊｝.)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","Uwaah, a-amazing...!");
VoicePlay("B050300101_45_010");
MsgDisp("Girl","Y-Yeah.
There are a lot, huh?");
MsgClose();
ScrFadeOut(0);
BGMPlay("BGM_C03_HONDA_B",0.01);
SEPlay("EV_SE_674",0,0.5);
StlOpen("ev_03_03");
StlEye(3,0);
StlMouth(3,0);
ScrFadeIn(0);
VoicePlay("B050300101_03_010");
MsgDisp("Honda","Alright, a Hiraiso Crab!");
VoicePlay("B050300101_44_010");
MsgDisp("Boy","Can you eat this one?");
StlEye(3,2);
VoicePlay("B050300101_03_020");
MsgDisp("Honda","Yessiree, it makes a good broth.
It's best in a miso soup!");
MsgDisp("主人公","You're going to eat one...?");
StlEye(3,0);
StlEyeOpenLevel(3,5,1);
VoicePlay("B050300101_03_030");
MsgDisp("Honda","Huh?
Do you not like crabs?");
MsgDisp("主人公","It's not that...
There are just so many of them...");
StlEye(3,1);
StlEyeOpenLevel(3,5,1);
VoicePlay("B050300101_03_040");
MsgDisp("Honda","That sort of thing?
Why?
Even though it's so yummy?");
StlEye(3,0);
VoicePlay("B050300101_45_020");
MsgDisp("Girl","Eh, I get it.
They're kind of creepy!");
VoicePlay("B050300101_44_020");
MsgDisp("Boy","The Quiz King doesn't understand women at
all, huh?");
MsgClose();
SEStop("EV_SE_674",1.5);
ScrFadeOut(0);
StlClose();
MsgClose();
ChOpen(3,253,0,0,0,#1,#1,0,0);
BGMVol(0.5,2);
ScrFadeIn(0);
VoicePlay("B050300101_44_030");
MsgDisp("Boy","By the way, Quiz King, are you and
Onee-chan dating?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("B050300101_03_050");
MsgDisp("Honda","Eh, that...
Hmm, what do you think?");
MsgDisp("主人公","Ehhh∋
Asking me is sort of...");
VoicePlay("B050300101_45_030");
MsgDisp("Girl","Wait a minute, Quiz King!
You can't ask a girl that sort of thing.
You really don't get women.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("B050300101_03_060");
MsgDisp("Honda","Eh, is that so?
Sorry...");
MsgDisp("主人公","(Hehe!
｛本多＊＊｝ seems stumped.
I guess that's pretty rare...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChPrmTblAdd(3,0);
