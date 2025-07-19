ChLayout(1);
BGOpen("ne000",1);
ScrFadeIn(0);
MsgDisp("主人公","(I think it's time to go home...)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(7,255,0,0,0,#1,#1,0,1,0,30);
ChOpen(1,255,0,0,0,#1,#1,0,2,0,30);
MsgDisp("主人公","Ah, ｛御影＊＊｝, ｛風真＊＊｝.
It's rare to see you two together.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010720100_07_000");
MsgDisp("Mikage","Oh, the three of us from the same class
are here.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("E010720100_01_000");
MsgDisp("Kazama","Please don't talk like you're one of our
classmates.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("E010720100_07_010");
MsgDisp("Mikage","Fine, but it's close enough.");
MsgDisp("主人公","Hehe.
What were you two up to?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("E010720100_01_010");
MsgDisp("Kazama","I'm heading to work.
I got a call from my manager.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010720100_07_020");
MsgDisp("Mikage","I have some business at Simon too, so I'm
going with Kazuma.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("E010720100_01_020");
MsgDisp("Kazama","He said he was choosing a present.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("E010720100_07_030");
MsgDisp("Mikage","I'm asking for advice.");
ChMouth(1,3);
MsgDisp("主人公","It's reassuring to know ｛風真＊＊｝ is
there to give you advice.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("E010720100_07_040");
MsgDisp("Mikage","He's quite reliable.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("E010720100_01_030");
MsgDisp("Kazama","Well, let's hurry.
We don't have much time.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("E010720100_01_040");
MsgDisp("Kazama","Be careful on your way home.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("E010720100_07_050");
MsgDisp("Mikage","See you.");
MsgDisp("主人公","Yeah, see you at school.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
BGMStop();
ChClose(7,0,30);
ChClose(1,0,30);
Wait(60);
VoicePlay("E010720100_01_050");
MsgDisp("Kazama","...So, who's this gift for?");
VoicePlay("E010720100_07_060");
MsgDisp("Mikage","For a cute girl.
Her name is Molly.");
VoicePlay("E010720100_01_060");
MsgDisp("Kazama","Hm?
I feel like I've heard that name before...");
MsgDisp("主人公","(Eh ∋ 
\"Molly\" is the cow from ｛御影＊＊｝'s
family home, isn't it...?)");
MsgClose();
ScrFadeOut(0,0);
