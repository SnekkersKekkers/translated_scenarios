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
But, you know, starting the job today...
The manager set you up didn't he?");
MsgDisp("主人公","What?");
ChEye(3,2);
ChMouth(3,1);
ChMotion(3,2);
VoicePlay("A020330100_03_020");
MsgDisp("Honda?","You see, today is the biggest day of the
month. We bring in a lot of magazines and
books. So it feels like you were called in
here today on purpose!");
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
MsgDisp("主人公","(｛本多＊＊｝... I feel like I've...)");
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
MsgDisp("Honda","You were probably thinking we've met
before. That's because you're going to
Haba High too, right? Me too.");
MsgDisp("主人公","Yeah, exactly!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
VoicePlay("A020330100_03_060");
MsgDisp("Honda","Yep. But don't you think meeting someone
from school at your job first and not at
school is a rare thing? I got a little
excited!");
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
MsgDisp("主人公","(｛本多＊＊｝... He's talking about
complicated things... We'll probably
get to see each other at work and in
school too!)");
MsgClose();
ScrFadeOut(0);
