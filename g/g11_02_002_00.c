MsgDisp("主人公","(I should slowly make my way home... Ah,
it's still early. Let's try going to the
beach. Maybe ｛颯砂＊＊｝ is training
there?)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf210",0);
ScrFadeIn(0);
MsgDisp("主人公","(Hmm... It doesn't seem like ｛颯砂＊＊｝
is here. It can't be helped, time to go
home...)");
VoicePlay("G110200200_02_000");
MsgDisp("Sassa?","Heeey!
Over here, over here!");
MsgDisp("主人公","Ah, ｛颯砂＊＊｝?");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGOpen("wf620",0);
BGMPlay("BGM_C02_SASSA_A");
MsgClose();
ChOpen(2,41,3,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110200200_02_010");
MsgDisp("Sassa","Huh...what are you doing here?");
MsgDisp("主人公","I thought maybe ｛颯砂＊＊｝ was out
running here.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("G110200200_02_020");
MsgDisp("Sassa","Seriously? That makes me happy.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("G110200200_02_030");
MsgDisp("Sassa","Well then, I'll live up to your
expectations and run a bit more.
You run too.");
MsgDisp("主人公","Ehh-∋");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
BGOpen("ev002",0);
MsgClose();
ChOpen(2,100,1,1,0,#1,#1,0,0);
BGMVol(0.5,2);
SEPlay("EV_SE_FOOT_037");
ScrFadeIn(0);
VoicePlay("G110200200_02_040");
MsgDisp("Sassa","Ah, I read the Habatcher column!");
MsgDisp("主人公","Really?
...How was it?");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,0);
ChCheek(2,10);
VoicePlay("G110200200_02_050");
MsgDisp("Sassa","Is that how you see me?
I'm happy, but I feel as if you're
exaggerating a bit.");
MsgDisp("主人公","That's not true.");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,2);
ChCheek(2,0);
VoicePlay("G110200200_02_060");
MsgDisp("Sassa","Then, I have to become the person who was
written about in that article.");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("G110200200_02_070");
MsgDisp("Sassa","Wouldn't it be awful if your article was
like fake news?");
MsgDisp("主人公","Hehe, yeah.
I'm rooting for you!");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200200_02_080");
MsgDisp("Sassa","Okay, I'm motivated now.
I'll put in my best effort and run.
See you, then!");
MsgClose();
BGMStop(2);
SEStop("EV_SE_FOOT_037",2);
MsgClose();
ChClose(2);
MsgDisp("主人公","(I would be happy if my article was even a
little bit of help to ｛颯砂＊＊｝! )");
MsgClose();
ScrFadeOut(0,0);
