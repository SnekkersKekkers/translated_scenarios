BGOpen("sc230",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(The weather is nice today.
Let's take a break on the rooftop...)");
VoiceEVSPlay(3);
VoicePlay("F100340000_03_000");
MsgDisp("Honda?","｛主人公｝.");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(3,254,0,0,0,-1,-1,0,1,0,30);
ChNanaType(0);
ChOpen(4,254,0,0,0,-1,-1,0,2,0,30);
MsgDisp("主人公","Ah, ｛本多＊＊｝, ｛七ツ森＊｝.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100340000_03_010");
MsgDisp("Honda","That's right, let me hear
your opinion too.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("F100340000_04_000");
MsgDisp("Nanatsumori","You're exaggerating.
It's not a matter of opinion, 
just likes and dislikes.");
MsgDisp("主人公","Eh, what are you talking about?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("F100340000_04_010");
MsgDisp("Nanatsumori","The fact that mine and Dahon's 
tastes clash in all sorts of ways.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("F100340000_03_020");
MsgDisp("Honda","That's right.
I wonder if Mii-kun and
I have bad compatibility?");
MsgDisp("主人公","Mii-kun, huh...hehe.
Now that I hear it again, it is funny.");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,1,1);
ChCheek(4,6);
VoicePlay("F100340000_04_020");
MsgDisp("Nanatsumori","...You're laughing.
Dahon, do something about that nickname.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("F100340000_03_030");
MsgDisp("Honda","Mii-kun is Mii-kun.");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,2,1);
ChCheek(4,3);
VoicePlay("F100340000_04_030");
MsgDisp("Nanatsumori","Haa.
Then, what's your opinion?");
MsgDisp("主人公","I think \"Mii-kun\" is cute?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("F100340000_03_040");
MsgDisp("Honda","Right.
Yeah, you and I seem to agree.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("F100340000_04_040");
MsgDisp("Nanatsumori","Ah, right.
I'm at a disadvantage, so I'll retreat.
See you then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4);
ChPosition(3,0);
ChEye(3,5);
ChMouth(3,4);
ChMotion(3,5,1);
VoicePlay("F100340000_03_050");
MsgDisp("Honda","Huh, Mii-kun!
...He's gone.");
MsgDisp("主人公","Yeah. What were 
you talking about?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("F100340000_03_060");
MsgDisp("Honda","Me and Mii-kun's tastes
are complete opposites.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("F100340000_03_070");
MsgDisp("Honda","I don't like spicy food, 
but Mii-kun loves it? I love insects, 
Mii-kun is bad with them.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("F100340000_03_080");
MsgDisp("Honda","I thought we get along well,
so this is a bit surprising.");
MsgDisp("主人公","I'm sure you two make a good
pair, helping each other out
with your  weaknesses.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("F100340000_03_090");
MsgDisp("Honda","Yepyep, that sounds good.
I'll say that to Mii-kun next time.");
MsgDisp("主人公","(What kind of thing will
｛七ツ森＊｝ reply?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
