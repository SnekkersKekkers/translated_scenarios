BGOpen("wf100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Well, I think I'll head home now.
......Huh?)");
VoicePlay("E010640000_06_000");
MsgDisp("Himuro?","Sorry.
Can you back up a little bit.");
VoicePlay("E010640000_22_000");
MsgDisp("Hikaru?","Oh, could it be you're embarrassed～?");
VoicePlay("E010640000_06_010");
MsgDisp("Himuro?","No way.");
MsgDisp("主人公","(That voice, could it be......)");
MsgDisp("主人公","｛氷室＊＊｝, ｛ひかる＊｝!
Were you two out together?");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(6,255,0,0,0,#1,#1,0,1,0,30);
ChOpen(22,255,3,3,3,#1,#1,0,2,0,30);
VoicePlay("E010640000_22_010");
MsgDisp("Hikaru","Ah, Mari!
How about you tag along with us?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010640000_06_020");
MsgDisp("Himuro","Who said we were out together?
We weren't.");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0);
VoicePlay("E010640000_22_020");
MsgDisp("Hikaru","Aha ▼
But you know, Himuro-chan is so kind.
he doesn't just ignore Hikaru ♪");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,4);
ChCheek(6,10);
VoicePlay("E010640000_06_030");
MsgDisp("Himuro","Hah?");
MsgDisp("主人公","Hehe, I agree.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,8);
VoicePlay("E010640000_06_040");
MsgDisp("Himuro","You too?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0);
ChEyeOpenLevel(22,8);
VoicePlay("E010640000_22_030");
MsgDisp("Hikaru","Himuro-chan is sooo cute～♪
Whenever Hikaru gets close, Himuro will
put distance between us. It's so funny～!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
ChCheek(6,0);
VoicePlay("E010640000_06_050");
MsgDisp("Himuro","Hanatsubaki-senpai has
no sense of personal space.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("E010640000_06_060");
MsgDisp("Himuro","Besides, if we get too
close, people will misunderstand.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,5);
VoicePlay("E010640000_22_040");
MsgDisp("Hikaru","Ah! Mari!");
MsgDisp("主人公","Huh, me?");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,2);
ChEyeOpenLevel(22,0);
VoicePlay("E010640000_22_050");
MsgDisp("Hikaru","Hmm, so that's it～......
You don't want Mari to misunderstand?
I see, I see.");
ChEye(6,0);
ChMouth(6,5);
ChMotion(6,5);
VoicePlay("E010640000_06_070");
MsgDisp("Himuro","Huh?
I didn't say anything like that——");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0);
ChEyeOpenLevel(22,8);
VoicePlay("E010640000_22_060");
MsgDisp("Hikaru","Your face says・ it ・all▼
So funny～♪");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("E010640000_06_080");
MsgDisp("Himuro","Ahh, seriously. This is why——");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5);
VoicePlay("E010640000_22_070");
MsgDisp("Hikaru","Ah, no way!
I totally kept big sis waiting.
Salut, you two!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ChClose(22);
ChPosition(6,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEyeOpenLevel(6,8);
VoicePlay("E010640000_06_090");
MsgDisp("Himuro","What's with her......");
MsgDisp("主人公","Umm......
What did you mean by not wanting
to be misunderstood?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,5);
ChCheek(6,10);
VoicePlay("E010640000_06_100");
MsgDisp("Himuro","∋
......It's nothing!");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6);
MsgDisp("主人公","(Hmm......
｛氷室＊＊｝'s face was bright red.
Did I make him angry......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
