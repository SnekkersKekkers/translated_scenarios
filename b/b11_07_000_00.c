BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Huh...｛御影＊＊｝
still hasn't come yet.");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","Hmm.
｛御影＊＊｝ is late...");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(33,254,0,0,0,#1,#1,0,0);
VoicePlay("B110700000_33_000");
MsgDisp("Guy","Hey, are you a believer or not?");
MsgDisp("主人公","Eh∋
Believe what?");
ChEye(33,1);
ChMouth(33,0);
VoicePlay("B110700000_33_010");
MsgDisp("Guy","The selection of mankind is advancing 
somewhere you don't know of.
Do you believe me?");
MsgDisp("主人公","I-I don't believe you.");
ChEye(33,1);
ChMouth(33,0);
VoicePlay("B110700000_33_020");
MsgDisp("Guy","Is that okay? Even if you don't believe
it, you have been chosen. That's an fact.
Well, shall we go?");
ChPosition(33,2);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChOpen(7,253,0,1,4,#1,#1,0,1,0,30);
MsgDispSksp(1,5);
VoicePlay("B110700000_07_000");
MsgDisp("Mikage","Oi oi, where are you going?");
MsgDispSksp(0);
ChEye(33,1);
ChMouth(33,1);
VoicePlay("B110700000_33_030");
MsgDisp("Guy","Hm?
No can do, you weren't chosen. 
That's why I can't take you.");
MsgDispSksp(1,5);
ChEye(7,1);
ChMouth(7,4);
ChMotion(7,3);
VoicePlay("B110700000_07_010");
MsgDisp("Mikage","Is this a friend of yours?");
MsgDispSksp(0);
MsgDisp("主人公","No...");
MsgDispSksp(1,5);
ChEye(7,1);
ChMouth(7,4);
ChMotion(7,1);
VoicePlay("B110700000_07_020");
MsgDisp("Mikage","Is that so...");
MsgDispSksp(0);
ChEye(7,1);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B110700000_07_030");
MsgDisp("Mikage","Are you in need of friends?
I understand that you're lonely.");
ChEye(33,1);
ChMouth(33,2);
ChEyeOpenLevel(33,7);
VoicePlay("B110700000_33_040");
MsgDisp("Guy","Ummm...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("B110700000_07_040");
MsgDisp("Mikage","If it's friends you want,
I'll be your friend.
Hey, come on.");
ChEye(33,1);
ChMouth(33,2);
VoicePlay("B110700000_33_050");
MsgDisp("Guy","I- I don't believe it.");
ChEye(7,4);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B110700000_07_050");
MsgDisp("Mikage","Whether you believe it, or don't 
believe it, is up to you.");
ChEye(33,1);
ChMouth(33,1);
ChEyeOpenLevel(33,7);
VoicePlay("B110700000_33_060");
MsgDisp("Guy","B-But, I don't believe it, so!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ChClose(33);
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
ChPosition(7,0);
VoicePlay("B110700000_07_060");
MsgDisp("Mikage","Phew...
poor guy.");
MsgDisp("主人公","Umm...｛御影＊＊｝,
Thank you very much for saving me.");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,5);
VoicePlay("B110700000_07_070");
MsgDisp("Mikage","Sorry, sorry.
It was because I was late that you 
were in such a scary situation.");
MsgDisp("主人公","It's alright.
That person must be lonely huh?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("B110700000_07_080");
MsgDisp("Mikage","Well yeah.
But he's not a suitable friend for you.
Come on, let's go.");
BGMStop();
