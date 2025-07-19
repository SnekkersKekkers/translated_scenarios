BGOpen("ne100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Well, I guess it's time to head home.
...Huh?)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(2,255,3,0,4,#1,#1,0,1,0,30);
ChOpen(6,255,0,0,0,#1,#1,0,2,0,30);
MsgDisp("主人公","｛颯砂＊＊｝, ｛氷室＊＊｝!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("E010620100_02_000");
MsgDisp("Sassa","Oh, it's you.
Out shopping?");
MsgDisp("主人公","Yeah.
What about you two?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("E010620100_06_000");
MsgDisp("Himuro","......");
MsgDisp("主人公","Um...
｛氷室＊＊｝?
What's wrong?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("E010620100_02_010");
MsgDisp("Sassa","Ah, he's sulking.
I totally beat him in a game.");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010620100_06_010");
MsgDisp("Himuro","Do I really need to say it?");
MsgDisp("主人公","Did you two go to the arcade?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("E010620100_02_020");
MsgDisp("Sassa","Yeah, I saw Inori playing a game so I
called out to him.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010620100_06_020");
MsgDisp("Himuro","I wish he hadn't...
I was forced to play a match even if I
didn't want to.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,2);
VoicePlay("E010620100_02_030");
MsgDisp("Sassa","Dont lie!
You were so confident in the beginning!");
MsgDisp("主人公","Hehe, but in the end ｛颯砂＊＊｝ was the
winner.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("E010620100_06_030");
MsgDisp("Himuro","It's not your first time, isn't it?
Otherwise you wouldn't have been able to
play so well.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("E010620100_02_040");
MsgDisp("Sassa","I'm telling you it really was.
Inori just taught me really well.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("E010620100_02_050");
MsgDisp("Sassa","...Ah sorry. I should go soon. I had fun
thanks to you. See you!");
MsgDisp("主人公","Okay, take care!");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(2);
ChPosition(6,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,7);
VoicePlay("E010620100_06_040");
MsgDisp("Himuro","...He's definitely lying.");
MsgDisp("主人公","｛氷室＊＊｝?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010620100_06_050");
MsgDisp("Himuro","In that game, sense and intuition are
important. But you can't win unless you
have a good strategy.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010620100_06_060");
MsgDisp("Himuro","There's no way someone who just started
today could do that easily...");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("E010620100_06_070");
MsgDisp("Himuro","It's definitely a lie.");
MsgDisp("主人公","(I think ｛氷室＊＊｝ is having trouble
accepting defeat...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
