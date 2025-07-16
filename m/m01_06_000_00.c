ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Mmmm......
I slept a lot.
I think I'm better now.");
SEPlay("EV_SE_DOOR_024");
SEWait();
MsgDisp("主人公","Yes, I'm upー!");
VoicePlay("M010600000_06_000");
MsgDisp("Himuro","It's me, but.
...... Can I come in?");
MsgDisp("主人公","Eh, ｛氷室＊＊｝∋
Uuhm......
Yeah, come in.");
SEPlay("EV_SE_DOOR_007");
Wait(10);
MsgClose();
BGMPlay("BGM_C06_INORI_A");
ChOpen(6,255,0,0,0,#1,#1,0,0);
VoicePlay("M010600000_06_010");
MsgDisp("Himuro","Your condition?");
MsgDisp("主人公","Mm, doing better now.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("M010600000_06_020");
MsgDisp("Himuro","I see.
That's fine then.");
MsgDisp("主人公","Thanks for all the trouble.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("M010600000_06_030");
MsgDisp("Himuro","......Whatever.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("M010600000_06_040");
MsgDisp("Himuro","Moreover, what if you took better care of
yourself?");
MsgDisp("主人公","Eh?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,3);
VoicePlay("M010600000_06_050");
MsgDisp("Himuro","Lately, you've been overdoing it, haven't
you? Your color was off, the fact that
you'd give out was obvious.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("M010600000_06_060");
MsgDisp("Himuro","Resting at certain times is important too.
'More haste, less speed' as they say.");
MsgDisp("主人公","That's true isn't it......");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("M010600000_06_070");
MsgDisp("Himuro","......Well, just be on guard from now on.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,5);
VoicePlay("M010600000_06_080");
MsgDisp("Himuro","Ah......
I forgot to bring your get well gift.");
MsgDisp("主人公","You got me one?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("M010600000_06_090");
MsgDisp("Himuro","Well, more or less.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("M010600000_06_100");
MsgDisp("Himuro","Haa...... No matter how much of a rush I
was in, it's no excuse. I'll go get it.");
MsgDisp("主人公","Eh, right now?
No, you don't have to!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("M010600000_06_110");
MsgDisp("Himuro","I got it for you, it'll just be bothering
me at my house.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,5);
VoicePlay("M010600000_06_120");
MsgDisp("Himuro","I'll give your gift to your parents.
Then, see you at school.
...... I'll be waiting.");
MsgDisp("主人公","Yeah, thanks!");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
Wait(60);
SEPlay("EV_SE_690",0.2,0.5);
BGMStop();
MsgClose();
ChClose(6);
Wait(50,1);
SEStop("EV_SE_690",0.5);
SEPlay("EV_SE_DOOR_008",0,0.5);
SEWait();
MsgDisp("主人公","(｛氷室＊＊｝ really rushed over......
I have to hurry and get better!)");
