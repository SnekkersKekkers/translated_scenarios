BGOpen("ne100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(It's time to go home.
...Huh?
Over there, is that...)");
BGMPlay("BGM_C22_HIKARU_A",0.01);
MsgClose();
ChOpen(22,255,0,4,2,#1,#1,0,0);
ChMotion(22,2,1);
VoicePlay("E012250000_22_000");
MsgDisp("Hikaru","Hmm...");
MsgDisp("主人公","｛ひかる＊｝!
What are you looking at?");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,3,1);
VoicePlay("E012250000_22_010");
MsgDisp("Hikaru","Mari!
Bonjour!");
ChMotion(22,0,1);
VoicePlay("E012250000_22_020");
MsgDisp("Hikaru","Hikaru was looking at this.");
MsgDisp("主人公","A flyer? \"
French Class Trial\"...");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("E012250000_22_030");
MsgDisp("Hikaru","Hikaru guesses it would be better to learn
it properly, after all?");
MsgDisp("主人公","Come to think of it,
｛ひかる＊｝, don't you
speak in French sometimes?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("E012250000_22_040");
MsgDisp("Hikaru","That's right! Hikaru was inspired by
Mizuki of the Sudo group. She really has
that Tres Bien sort of feeling～▼");
MsgDisp("主人公","I see...!");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,2,1);
VoicePlay("E012250000_22_050");
MsgDisp("Hikaru","But Hikaru is just copying her.
Hikaru can't speak French at all.");
ChMotion(22,0,1);
VoicePlay("E012250000_22_060");
MsgDisp("Hikaru","French seems really difficult to learn.");
ChEye(22,2);
ChMouth(22,4);
ChMotion(22,2,1);
VoicePlay("E012250000_22_070");
MsgDisp("Hikaru","Hikaru guesses it wouldn't be that hard if
Hikaru studied.
Hmm...");
MsgDisp("主人公","Hmm, since it's just a trial class, why
don't you try it out?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("E012250000_22_080");
MsgDisp("Hikaru","Good idea!
If Hikaru tries but can't keep up, then
it's really impossible!");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0,1);
VoicePlay("E012250000_22_090");
MsgDisp("Hikaru","Merci, Mari▼
Hikaru will go there now～!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(22);
MsgDisp("主人公","(I see. ｛ひかる＊｝
uses French because she was influenced by
someone she admires...)");
MsgClose();
ScrFadeOut(0,0);
