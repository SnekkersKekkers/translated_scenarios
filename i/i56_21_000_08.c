BGOpen("ar500",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("I562100008_49_000");
MsgDisp("Woman Customer","Thank you for your help in choosing
the sweets.");
MsgDisp("主人公","Not at all. It's fine as long as
you know what kind of sweets you'd like.
Please feel free to ask for help.");
VoicePlay("I562100008_49_010");
MsgDisp("Woman Customer","Oh, is that so?
Then, I'll leave it to you next time,
too. Thank you.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.5);
SEWait();
MsgClose();
Wait(30,0);
BGMPlay("BGM_C21_MICHIRU_A",0.01);
Wait(15,0);
ChOpen(21,35,0,4,0,-1,-1,0,0);
VoicePlay("I562100008_21_000");
MsgDisp("Michiru","Hehe.
Looks like you have a fan, right Mari?");
MsgDisp("主人公","Hm?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("I562100008_21_010");
MsgDisp("Michiru","That customer only comes on days
when you're working a shift.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("I562100008_21_020");
MsgDisp("Michiru","They always make sure to ask you
to choose sweets for them, Mari.
Seems like they like your taste.");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("I562100008_21_030");
MsgDisp("Michiru","You've already become such
a charismatic shopkeeper, hm?
I'm counting on you.");
MsgDisp("主人公","(To be complimented in such a way......
I'm so happy!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
