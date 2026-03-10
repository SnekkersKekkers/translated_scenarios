BGOpen("sc310",0);
ScrFadeIn(0);
VoicePlay("A020250000_02_000");
MsgDisp("Sassa?","Ryota, you here～?");
MsgDisp("主人公","Ah, ｛Sassa＊＊｝!
What's going on?");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(2,254,3,0,2,#1,#1,0,0);
VoiceEVSPlay(2);
VoicePlay("A020250000_02_010");
MsgDisp("Sassa","｛主人公｝.
You're in the same class as Ryota?");
MsgDisp("主人公","Yeah. And you ｛Sassa＊＊｝, do you and
｛Kazama＊＊｝ know each other?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("A020250000_02_020");
MsgDisp("Sassa","Ah— rather than know each other, we're-");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("A020250000_01_000");
MsgDisp("Kazama?","Childhood friends.");
ChPosition(2,1);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(1,254,0,0,2,#1,#1,0,2);
MsgDisp("主人公","Eh, is that so?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("A020250000_02_030");
MsgDisp("Sassa","Yeah.
I don't remember that well though.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("A020250000_01_010");
MsgDisp("Kazama","The three of us were inseparable.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(1,10);
VoicePlay("A020250000_02_040");
MsgDisp("Sassa","The three of us?");
MsgDisp("主人公","Huh...What do you mean, ｛Kazama＊＊｝?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("A020250000_01_020");
MsgDisp("Kazama","What the hell, guys?
You really don't remember anything.
We went to the same kindergarten...?");
ChEyeOpenLevel(1,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("A020250000_02_050");
MsgDisp("Sassa","I've heard it from my parents, and from
Ryota too...");
ChEye(1,0);
ChMouth(1,2);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("A020250000_02_060");
MsgDisp("Sassa","But, you too?");
MsgDisp("主人公","You're both my childhood friends?
That's kind of amazing.");
ChEye(1,2);
ChEyeOpenLevel(1,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,3);
VoicePlay("A020250000_02_070");
MsgDisp("Sassa","There was a girl like you...?
I don't remember at all.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
VoicePlay("A020250000_01_030");
MsgDisp("Kazama","You didn't even remember me that much.
Though I'd be annoyed if you only
remembered her.");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,0);
VoicePlay("A020250000_02_080");
MsgDisp("Sassa","Why would you be?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
ChCheek(1,5);
VoicePlay("A020250000_01_040");
MsgDisp("Kazama","No...No reason.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("A020250000_02_090");
MsgDisp("Sassa","Hmm.
So, you don't remember me either, right?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChCheek(1,0);
MsgDisp("主人公","Yeah, I don't remember much from
kindergarten...");
ChEyeOpenLevel(1,8);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("A020250000_02_100");
MsgDisp("Sassa","That's normal, I think?
It's just that a certain someone is
different.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("A020250000_01_050");
MsgDisp("Kazama","Shut up.
By the way, what did you want, Sassa?");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4);
VoicePlay("A020250000_02_110");
MsgDisp("Sassa","What?");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("A020250000_01_060");
MsgDisp("Kazama","You were looking for me, weren't you?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("A020250000_02_120");
MsgDisp("Sassa","Forget about that for now!");
ChEye(1,0);
ChMouth(1,2);
BGMVol(0.5,0.1);
SEPlay("EV_SE_SCHOOL_001",0,0.8);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("A020250000_02_130");
MsgDisp("Sassa","Ah, crap!
I have class in another room!
See you later, childhood buddies!");
MsgDisp("主人公","Hehe. See you later, ｛Sassa＊＊｝!");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("A020250000_01_070");
MsgDisp("Kazama","Get going already.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("A020250000_01_080");
MsgDisp("Kazama","Huh, looks like it's gonna get noisy
around here.");
MsgDisp("主人公","(So I'm not just childhood friends with
｛Kazama＊＊｝, but also with ｛Sassa＊＊｝.
What a coincidence...)");
SEStop("EV_SE_SCHOOL_001");
BGMStop();
MsgClose();
ScrFadeOut(0);
