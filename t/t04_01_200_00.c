MsgType(0);
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("T040120000_01_000");
MsgDisp("Kazama","That's right, we all used to go to the
school cafeteria together, right? Even
though we didn't ask for it, that lady
would give us extra large portions.");
MsgClose();
StlOpen("ev_01_26");
BGMPlay("BGM_PROLOGUE",0.01);
Wait(120);
ScrFadeIn(0);
Wait(60);
VoicePlay("T040120000_06_000");
MsgDisp("Himuro","Well, solely based on quantity, the 'young
master's meal' was the definite loser.");
VoicePlay("T040120000_01_010");
MsgDisp("Kazama","The 'young master's meal'?
What's that?");
VoicePlay("T040120000_02_000");
MsgDisp("Sassa","......Huh? Is Inori the only one who
didn't get any extras? Don't be sulky.");
VoicePlay("T040120000_06_010");
MsgDisp("Himuro","Huh? Why me?
I don't understand.");
MsgDisp("主人公","｛氷室＊＊｝ doesn't eat that much.
......right?");
VoicePlay("T040120000_01_020");
MsgDisp("Kazama","Well, he's still a kid.");
VoicePlay("T040120000_02_010");
MsgDisp("Sassa","Yeah, take all the time you need to grow,
you know?");
VoicePlay("T040120000_06_020");
MsgDisp("Himuro","......I'll make it a mega serving.");
MsgDisp("主人公","Ehh-∋");
MsgClose();
BGMStop(5);
ScrFadeOut(0,0,300);
StlClose();
VoicePlay("T040120000_01_030");
MsgDisp("Kazama","It was really fun eating with those guys.
Why don't I invite them over next time?
Let's have a house party.");
MsgClose();
ScrFadeOut(0,0,300);
Wait(300,0);
