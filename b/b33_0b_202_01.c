ChClose(1,0,0);
ChClose(3,0,0);
ChClose(4,0,0);
BGOpen("wf500",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("wf510",0);
BGMPlay("BGM_PLACE_PLANETA_RIUM",0.01);
ChLayout(2);
ChOpen(3,253,4,3,3,0,-1,0,3,0,30);
ChOpen(1,253,0,0,2,-1,-1,0,3,0,30);
ChNanaType(0);
ChOpen(4,253,0,0,0,-1,-1,0,3,0,30);
ScrFadeIn(0);
VoicePlay("B330B20201_03_000");
MsgDisp("Honda","I see, I seeー.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("B330B20201_01_000");
MsgDisp("Kazama","Honda, don't bother the staff.
What did you ask them?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B330B20201_03_010");
MsgDisp("Honda","I was just wondering what 
kind of system the projector
in this planetarium uses!");
ChMotion(1,1);
ChEyeOpenLevel(1,0);
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B330B20201_04_000");
MsgDisp("Nanatsumori","That's just like Dahon.");
ChEye(1,4);
ChEyeOpenLevel(1,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("B330B20201_03_020");
MsgDisp("Honda","There are both optical and digital 
projectors in planetariums.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B330B20201_01_010");
MsgDisp("Kazama","The latest ones are digital right?");
ChEye(4,2);
ChMouth(4,0);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("B330B20201_03_030");
MsgDisp("Honda","Yep yep, you'd think that
wouldn't you? But in terms of replicating 
the brightness of stars, optical 
still has the upper hand.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B330B20201_03_040");
MsgDisp("Honda","But digital is better in terms of the 
range of visual expression.
It's difficult to choose
which one to use.");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B330B20201_04_010");
MsgDisp("Nanatsumori","I'm getting sleepy even 
before the show starts...");
MsgDisp("主人公","Hehe!");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
VoicePlay("B330B20201_01_020");
MsgDisp("Kazama","So?
Which one does this planetarium us——");
ChEye(1,3);
ChMouth(1,2);
ChMotion(1,3);
SEPlay("EV_SE_038");
SEWait();
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
VoicePlay("B330B20201_03_050");
MsgDisp("Honda","Ah, it's already starting.
Let's take our seats!");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,2,1);
VoicePlay("B330B20201_04_020");
MsgDisp("Nanatsumori","He really goes at his own pace...");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B330B20201_01_030");
MsgDisp("Kazama","Well, that's what makes
him interesting though.");
MsgDisp("主人公","(Ahaha...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,7);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,7);
ChNanaType(0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,7);
