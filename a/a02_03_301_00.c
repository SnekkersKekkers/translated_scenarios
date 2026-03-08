BGOpen("ar600",0);
ScrFadeIn(0);
MsgDisp("主人公","(Hmm, there's no one at the register.
I need to find a staff member...)");
SEPlay("EV_SE_590",0,0.6);
Wait(20,0);
ScrQuake(0);
MsgDisp("主人公","Ah! Sorry!");
MsgClose();
ScrFadeOut(0);
BGOpen("ev003",0);
BGMPlay("BGM_C03_HONDA_I");
MsgClose();
ChOpen(3,100,1,1,1,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("A020330100_03_000");
MsgDisp("Honda?","Ah-! You're the newbie!");
MsgDisp("主人公","Y-Yes!
I'm the new employee here.
My name is ｛主人公苗字｝.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("A020330100_03_010");
MsgDisp("Honda?","Yeah yeah, I know.
But, you know, starting today...
The manager threw you in, huh?");
MsgDisp("主人公","What?");
ChEye(3,2);
ChMouth(3,1);
ChMotion(3,2);
VoicePlay("A020330100_03_020");
MsgDisp("Honda?","You see, today's the busiest day
of the month. Tons of new magazines
and books. That's why it's so hectic!");
MsgClose();
ScrFadeOut(0);
ChClose(3);
BGOpen("ar600",0);
ScrFadeIn(0);
MsgClose();
ChOpen(3,35,0,0,0,#1,#1,0,0,0,60);
VoicePlay("A020330100_03_030");
MsgDisp("Honda","I'm Honda Iku.
I'll teach you anything you need, okay?");
MsgDisp("主人公","(｛Honda＊＊｝...I feel like I've...)");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5);
VoicePlay("A020330100_03_040");
MsgDisp("Honda","Ding-ding-ding!
Correct answer!");
MsgDisp("主人公","Ehhh?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4);
VoicePlay("A020330100_03_050");
MsgDisp("Honda","I'm pretty sure we've met before.
You go to Haba High too, right?
Me too.");
MsgDisp("主人公","Yeah, exactly!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
VoicePlay("A020330100_03_060");
MsgDisp("Honda","Yep. But meeting someone from school
at your job instead is pretty rare,
right? I'm getting excited!");
MsgDisp("主人公","A rare thing?");
ChEye(3,3);
ChMouth(3,2);
ChMotion(3,1);
VoicePlay("A020330100_42_000");
MsgDisp("Manager","Hey, we need help at the register!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
VoicePlay("A020330100_03_070");
MsgDisp("Honda","Coming!
Here, you come with me too.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
MsgDisp("主人公","(｛Honda＊＊｝...He says some complicated
things, but...I'm looking forward to
seeing him at work and school!)");
MsgClose();
ScrFadeOut(0);
