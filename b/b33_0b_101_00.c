BGOpen("wf100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(2);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChNanaType(0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ScrFadeIn(0);
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("B330B10100_04_000");
MsgDisp("Nanatsumori","... So.
What's the program today?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("B330B10100_03_000");
MsgDisp("Honda","what kind of course would the four of us
enjoy at the shopping mall?");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B330B10100_01_000");
MsgDisp("Kazama","There's should be more to it right?
Right?");
MsgDisp("主人公","...Eh?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B330B10100_01_010");
MsgDisp("Kazama","Today we're going to coordinate outfits.");
ChEye(4,1);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B330B10100_04_010");
MsgDisp("Nanatsumori","Nice idea.");
ChSet(3,3,1);
VoicePlay("B330B10100_03_010");
MsgDisp("Honda","Nice, nice!
I have confidence!");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("B330B10100_01_020");
MsgDisp("Kazama","Alright.
Alright, let's start with that shop and go
in order.");
MsgDisp("主人公","Eh, wait everyone!");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEye(4,0);
ChMotion(4,0,1);
VoicePlay("B330B10100_04_020");
MsgDisp("Nanatsumori","Hm?");
MsgDisp("主人公","What should I do?");
ChMouth(1,0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B330B10100_03_020");
MsgDisp("Honda","You're going to try on our coordinated
outfits.
Seems fun, huh♪");
ChEye(1,0);
ChMouth(1,3);
ChEyeOpenLevel(1,8);
MsgDisp("主人公","I-I see..");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChClose(1,0,0);
BGOpen("wf810",0);
ScrFadeIn(0);
SEPlay("EV_SE_544");
ChOpen(1,255,3,0,3,#1,#1,0,0,0,30);
VoicePlay("B330B10100_01_030");
MsgDisp("Kazama","There's something good already.
Try this bucket hat on.");
ChMotion(1,0);
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B330B10100_04_030");
MsgDisp("Nanatsumori","Oh, nice.
Then I'll give you this long choker.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("B330B10100_03_030");
MsgDisp("Honda","Then...
I think this t-shirt will suit you.
Hey hey, try them all on and show us!");
MsgDisp("主人公","(I'm happy they chose something for me
but... Do they plan on making me try on
clothes at every shop∋)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,7);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,7);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,7);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
