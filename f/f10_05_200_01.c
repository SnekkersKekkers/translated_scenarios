BGOpen("sc310",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Next lesson is...)");
VoicePlay("F100520001_05_000");
MsgDisp("Hiiragi","Excuse me.
Is Kazama-kun here?");
MsgDisp("主人公","Ah, ｛柊＊＊＊｝?");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(5,254,0,0,4,-1,-1,0,0);
VoicePlay("F100520001_05_010");
MsgDisp("Hiiragi","Pardon the intrusion.");
ChPosition(5,1);
ChMotion(5,4);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(1,254,1,0,0,-1,-1,0,2);
VoicePlay("F100520001_01_000");
MsgDisp("Kazama","Hiiragi, what's up?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100520001_05_020");
MsgDisp("Hiiragi","I came to thank you for the
other day. Please give my best
regards to your grandfather.");
MsgDisp("主人公","｛柊＊＊＊｝, 
you were able to look around
the Kazama family storehouse?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100520001_05_030");
MsgDisp("Hiiragi","Yes.
It was truly a deeply 
interesting experience.");
ChMotion(1,0);
MsgDisp("主人公","Hehe.
｛柊＊＊＊｝, you seem happy.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("F100520001_05_040");
MsgDisp("Hiiragi","Yes. I had consulted him for hints
regarding the play, and he showed
me various different things.");
MsgDisp("主人公","Is that so!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("F100520001_01_010");
MsgDisp("Kazama","Yeah. Ojii-chan was so happy that 
he immediately made plans for next time.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100520001_05_050");
MsgDisp("Hiiragi","Next time, we will prepare hanging
scrolls and folding screens.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("F100520001_01_020");
MsgDisp("Kazama","I'm looking forward to it
because there are some things
I've also never seen before.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100520001_05_060");
MsgDisp("Hiiragi","Yes, I am looking forward to it.");
MsgDisp("主人公","(It seems like ｛風真＊＊｝,
｛柊＊＊＊｝ and ｛風真＊＊｝ 's grandpa
has a super good relationship.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
