MsgClose();
ScrFadeOut(0,0);
MsgType(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("T040420000_04_000");
MsgDisp("Nanatsumori","That's right. Do you remember? When I
tried to do a hair arrangement for those
two, and then the classroom turned into a
big photoshoot.");
MsgClose();
StlOpen("ev_04_21");
BGMPlay("BGM_PROLOGUE",0.01);
Wait(120);
ScrFadeIn(0);
Wait(60);
VoicePlay("T040420000_04_010");
MsgDisp("Nanatsumori","Kazama, you can take the hair pin off.
I'll set your hair properly n——");
VoicePlay("T040420000_01_000");
MsgDisp("Kazama","It's fine.
I'm okay like this.");
MsgDisp("主人公","But ｛七ツ森＊｝ went to
the trouble of styling your hair for
you...give it back.");
VoicePlay("T040420000_03_000");
MsgDisp("Honda","Hey, hey. Can you lend me that hairpin
next time? I think that'll make me look
the cutest. Oh come on!");
VoicePlay("T040420000_04_020");
VoiceEVSPlay(4);
MsgDisp("Nanatsumori","Ah, come on.
Just give the hairpin back!
This...is my fault, ｛主人公｝.");
MsgClose();
BGMStop(5);
ScrFadeOut(0,0,300);
StlClose();
VoicePlay("T040420000_04_030");
MsgDisp("Nanatsumori","I don't know why we started fighting over
the hairpin...I know this is childish
but, I wondered if everyone liked you.");
MsgClose();
ScrFadeOut(0,0,300);
Wait(300,0);
