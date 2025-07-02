BGOpen("sc000",1);
ScrFadeIn(0);
MsgDisp("主人公","(｛氷室＊＊｝ wasn't there. I wanted to
apologize for the three-legged race......)");
MsgDisp("主人公","(Ah, maybe......)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgClose();
BGOpen("ev006",1);
BGMPlay("BGM_C06_INORI_B");
ChOpen(6,100,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("G110600100_06_000");
MsgDisp("Himuro","......So, what?
Why did you come all the way here?");
MsgDisp("主人公","Ah......I wanted to apologize for
something that happened at the sports
festival. I'm sorry. That we came last in
the three legged race.");
ChEye(6,3);
ChMouth(6,3);
ChMotion(6,2);
VoicePlay("G110600100_06_010");
MsgDisp("Himuro","Oh, is that what it's about?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600100_06_020");
MsgDisp("Himuro","Well, it's fine. I was the one who decided
to partner up with you.");
MsgDisp("主人公","You're not angry?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600100_06_030");
MsgDisp("Himuro","I'm not that childish.
......but.");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("G110600100_06_040");
MsgDisp("Himuro","I did doubt my physical ability for a bit.
Maybe I wasn't that good at
exercise......that's what I thought.");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("G110600100_06_050");
MsgDisp("Himuro","So when I was able to surf as normal
today, I was relieved.");
MsgDisp("主人公","I guess it's my fault after all.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("G110600100_06_060");
MsgDisp("Himuro","I won't deny that.");
MsgDisp("主人公","Next time, I'll give it my all!");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,1);
VoicePlay("G110600100_06_070");
MsgDisp("Himuro","Next time......
Well, do as you like?");
MsgDisp("主人公","Yes!");
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6);
