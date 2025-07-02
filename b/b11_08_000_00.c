BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(｛大地＊＊｝ still isn't here...)");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(33,254,0,0,0,-1,-1,0,0);
VoicePlay("B110800000_33_000");
MsgDisp("Guy","I'll teach you about this
world's true form.");
MsgDisp("主人公","Eh?
I'm here meeting with someone...");
ChEye(33,1);
ChMouth(33,0);
VoicePlay("B110800000_33_010");
MsgDisp("Guy","Unfortunately, I can't teach them.
Just you. 
Come on, let's go.");
MsgDisp("主人公","No, I'm fine thank you...");
ChEye(33,0);
ChMouth(33,0);
ChEyeOpenLevel(33,0);
VoicePlay("B110800000_33_020");
MsgDisp("Guy","You're confused huh.
Are you going to choose your friend 
or follow your curiosity...?");
VoicePlay("B110800000_08_000");
MsgDisp("Shirahane?","We're not friends.");
ChEye(33,0);
ChMouth(33,1);
MsgDisp("主人公","Eh?");
ChPosition(33,2);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
BGMPlay("BGM_C08_DAICHI_A",0.01);
MsgClose();
ChOpen(8,253,0,3,4,10,-1,0,1);
ScrFadeIn(0);
MsgDisp("主人公","｛大地＊＊｝！");
MsgDispSksp(1,5);
VoicePlay("B110800000_08_010");
MsgDisp("Shirahane","That girl is my girlfriend.");
MsgDispSksp(0);
MsgDisp("主人公","！");
MsgDispSksp(1,5);
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("B110800000_08_020");
MsgDisp("Shirahane","Sorry, I was late.
Are you alright?");
MsgDispSksp(0);
MsgDisp("主人公","Y-yeah.");
ChEye(33,1);
ChMouth(33,1);
ChEyeOpenLevel(33,0);
VoicePlay("B110800000_33_030");
MsgDisp("Guy","Haaa.
You brought your weird kid along?");
MsgDispSksp(1,5);
ChEye(8,1);
ChMouth(8,1);
ChMotion(8,1,1);
VoicePlay("B110800000_08_030");
MsgDisp("Shirahane","I might be a kid, 
but you're a pain in the butt.
Fly away painー!");
MsgDispSksp(0);
ChEye(33,1);
ChMouth(33,0);
VoicePlay("B110800000_33_040");
MsgDisp("Guy","F-fly away?
What's with that? Which of us is 
the pain really?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(33);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,4,1);
ChPosition(8,0);
VoicePlay("B110800000_08_040");
MsgDisp("Shirahane","Haha!
This guy's actually pretty good 
at playing along, huh!");
MsgDisp("主人公","Hehe!");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("B110800000_08_050");
MsgDisp("Shirahane","...I'm glad nothing happened.
I'll be more careful next time, 
so forgive me.");
