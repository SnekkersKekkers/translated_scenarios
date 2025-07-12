ScrFadeIn(0);
MsgDisp("主人公","I wonder if ｛風真＊＊｝ is still 
shopping......");
VoicePlay("Q110100000_01_000");
MsgDisp("Kazama?","Would you like a freshly baked castella?");
MsgDisp("主人公","Eh... Yes!");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(1,254,0,0,3,8,#1,0,0);
ChMotion(1,3);
VoicePlay("Q110100000_01_010");
MsgDisp("Kazama","You're totally hooked.");
MsgDisp("主人公","Geez!
Aren't we out of time, though?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("Q110100000_01_020");
MsgDisp("Kazama","They said there was a seasonal flavor.
So I stood in line for you.");
MsgDisp("主人公","Eh, are you sure?
Thanks!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("Q110100000_01_030");
MsgDisp("Kazama","Yeah. The way you get excited so quickly
is a good trait of yours.");
MsgDisp("主人公","Hehe, I can't help it since it's seasonal.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("Q110100000_01_040");
MsgDisp("Kazama","......Also, this.
A Windmill-shaped charm.");
MsgDisp("主人公","Wow, so cute!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("Q110100000_01_050");
MsgDisp("Kazama","Right?
It's very detailed.
I liked it so much I also bought one.");
MsgDisp("主人公","So, we're matching, right?
Thanks!");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("Q110100000_01_060");
MsgDisp("Kazama","...It was worth the time it took to
choose.");
MsgDisp("主人公","Eh?");
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("Q110100000_01_070");
MsgDisp("Kazama","Nothing.
The cake will be gone after 
you eat it, but this one is a keepsake.");
MsgDisp("主人公","Yeah, I'll treasure it.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
