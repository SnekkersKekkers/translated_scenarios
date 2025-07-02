BGOpen("wf200",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","...Alright.
Time to head home.
Huh, is that......");
VoicePlay("E010130100_03_000");
MsgDisp("Honda?","Huh?
Might as well, no need to be shy!");
MsgDisp("主人公","What are you guys doing?");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(1,255,0,2,2,-1,-1,0,1,0,30);
ChOpen(3,255,0,0,0,-1,-1,0,2,0,30);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("E010130100_01_000");
MsgDisp("Kazama","Thank god......
You tell her!");
ChEyeOpenLevel(1,0);
MsgDisp("主人公","What's going on?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3);
VoicePlay("E010130100_03_010");
MsgDisp("Honda","I was just suggesting to 
Ryo-kun, y'know, that I cut his hair 
too while I was doing mine!");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("E010130100_03_020");
MsgDisp("Honda","His bangs are too long, 
don't you think?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("E010130100_01_010");
MsgDisp("Kazama","Not at all.
I'm keeping it that way. ");
MsgDisp("主人公","(Ah, so that's what 
it was about......)");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("E010130100_01_020");
MsgDisp("Kazama","......Hmm? You, just now,
That was a bit of a funny reaction, 
wasn't it?");
MsgDisp("主人公","No, not at all.
I think your bangs suit you.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("E010130100_01_030");
MsgDisp("Kazama","Right?
That's what I think too.
Honda should only cut his own hair.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,2);
ChEyeOpenLevel(3,0);
VoicePlay("E010130100_03_030");
MsgDisp("Honda","Hmph, my sister won't 
let me do it either...... I wonder why
people don't want to-.");
ChMouth(1,2);
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("E010130100_03_040");
MsgDisp("Honda","But I like cutting hair......");
ChEyeOpenLevel(1,8);
MsgDisp("主人公","......Huh?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("E010130100_01_040");
MsgDisp("Kazama","That's off.
I'm not letting you touch her hair.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1);
VoicePlay("E010130100_03_050");
MsgDisp("Honda","But I haven't said anything yet.
Ryo-kun, you're too many steps ahead.");
ChMouth(1,2);
ChMotion(1,0);
MsgDisp("主人公","Ehm......Excuse me? I don't have any plans
for a haircut right now.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("E010130100_03_060");
MsgDisp("Honda","I get it.
Sorry, you two.
Well then, see you guys!");
MsgDisp("主人公","See you!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(3);
ChPosition(1,0);
Wait(60,0);
MsgDisp("主人公","He looked a little sad......");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("E010130100_01_050");
MsgDisp("Kazama","Don't be so soft.
I really don't wanna see you
with Honda's hairstyle.");
MsgDisp("主人公","R, really?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("E010130100_01_060");
MsgDisp("Kazama","Yeah, keep your head up.
See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(1);
MsgDisp("主人公","(Hmphhh......
I really think ｛本多＊＊｝ 's hairstyle
suits him though.)");
MsgClose();
ScrFadeOut(0,0);
