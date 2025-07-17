BGOpen("sc511",0);
ScrFadeIn(0);
MsgDisp("主人公","(It's gotten late.
Gotta go back home.)");
VoicePlay("A020600100_32_000");
MsgDisp("VP Himuro?","Alright, finally.");
MsgDisp("主人公","(Hmm? That voice... Vice Principal
Himuro?)");
VoicePlay("A020600100_06_000");
MsgDisp("Himuro?","Yes. I'll be counting on you from next
month.");
VoicePlay("A020600100_32_010");
MsgDisp("VP Himuro","Although let me tell you, you are not
getting any special treatment.");
VoicePlay("A020600100_06_010");
MsgDisp("Himuro?","Of course, I understand.
I didn't expect you to.");
VoicePlay("A020600100_32_020");
MsgDisp("VP Himuro","Hmm... I like this mindset. Looking
forward to it.");
VoicePlay("A020600100_06_020");
MsgDisp("Himuro?","Thank you.
Now if you'll excuse me.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
Wait(80,0);
SEPlay("EV_SE_049");
Wait(10,0);
ScrQuake(5);
MsgDisp("主人公","Whoa!");
MsgClose();
SEPlay("EV_SE_544",0,0.5);
ChOpen(6,255,0,0,0,#1,#1,0,0);
VoicePlay("A020600100_06_030");
MsgDisp("Himuro?","Excuse me.");
MsgDisp("主人公","Ah, it's fine...");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
MsgDisp("主人公","(I've never seen him before...
He wasn't wearing a uniform.)");
MsgClose();
VoicePlay("A020600100_32_030");
MsgDisp("VP Himuro","——You.");
MsgDisp("主人公","Y-YES!");
SEPlay("EV_SE_544");
ChOpen(32,254,0,0,0,#1,#1,0,0);
VoicePlay("A020600100_32_040");
MsgDisp("VP Himuro","...Your tie is crooked.
Fix it.");
MsgDisp("主人公","What?
Ah, alright...");
SEPlay("EV_SE_623",0,0.4);
SEWait();
ChEye(32,0);
ChMouth(32,0);
VoicePlay("A020600100_32_050");
MsgDisp("VP Himuro","Very well. Make sure to be properly
dressed at all times. Dismissed.");
MsgClose();
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(32);
Wait(30);
MsgDisp("主人公","(Phew... I thought I was gonna get
scolded!)");
MsgDisp("主人公","(But still, who was that boy just
now...?)");
MsgClose();
ScrFadeOut(0);
