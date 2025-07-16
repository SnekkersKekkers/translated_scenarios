BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Looks like ｛颯砂＊＊｝ still
isn't here yet...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","(｛颯砂＊＊｝, you're late...
Did something happen?)");
SEPlay("EV_SE_544");
ChOpen(33,254,0,0,0,#1,#1,0,0);
VoicePlay("B110200000_33_000");
MsgDisp("Guy","There's a world that I want to show you.
Won't you see it?");
MsgDisp("主人公","Eh∋
W-What is it?");
VoicePlay("B110200000_33_010");
MsgDisp("Guy","The true, conspiracy-filled reality of the
world.
I'll show you.");
ChPosition(33,2);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
ChOpen(2,253,2,1,0,#1,#1,0,1,0,30);
BGMPlay("BGM_C02_SASSA_A",0.01);
VoicePlay("B110200000_02_000");
MsgDisp("Sassa","Oi, what business do you have with her?");
ChEye(33,2);
ChMouth(33,2);
VoicePlay("B110200000_33_020");
MsgDisp("Guy","Huh?
Damn... you're huge.");
MsgDispSksp(1,5);
ChEye(33,1);
ChMouth(33,1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("B110200000_02_010");
MsgDisp("Sassa","Are you alright?");
MsgDispSksp(0);
MsgDisp("主人公","Yeah, I'm alright.
... No fighting, okay.");
MsgDispSksp(1,5);
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("B110200000_02_020");
MsgDisp("Sassa","That depends on him.
... Hey, how should we do this?");
MsgDispSksp(0);
ChEye(33,1);
ChMouth(33,1);
ChEyeOpenLevel(33,0);
VoicePlay("B110200000_33_030");
MsgDisp("Guy","Haa, you're with a guy. T-Then it's
impossible. It's disappointing, but you're
disqualif——");
MsgDispSksp(1,5);
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("B110200000_02_030");
MsgDisp("Sassa","You're disqualified.
That's a penalty just now.
Come here.");
MsgDispSksp(0);
ChEye(33,1);
ChMouth(33,1);
VoicePlay("B110200000_33_040");
MsgDisp("Guy","D-Don't get carried away just because
you're big～!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ChClose(33);
ChPosition(2,0);
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("B110200000_02_040");
MsgDisp("Sassa","What's with that guy, spouting about how
big people are...");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("B110200000_02_050");
MsgDisp("Sassa","Ah, more importantly, I'm sorry.
It's my fault for being late.
Were you scared?");
MsgDisp("主人公","No.
I felt safe because ｛颯砂＊＊｝
was there.");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("B110200000_02_060");
MsgDisp("Sassa","Is it cause I'm big?");
MsgDisp("主人公","Hehe, yeah.
Like a gentle giant?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChCheek(2,10);
VoicePlay("B110200000_02_070");
MsgDisp("Sassa","Hmmm...
I don't dislike it when you say it.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,2);
ChCheek(2,0);
VoicePlay("B110200000_02_080");
MsgDisp("Sassa","Alright, let's pull ourselves together and
get going.");
