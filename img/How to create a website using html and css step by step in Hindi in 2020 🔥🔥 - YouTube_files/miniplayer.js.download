(function(g){var window=this;'use strict';var o6=function(a){g.V.call(this,{D:"div",K:"ytp-miniplayer-ui"});this.dg=!1;this.player=a;this.N(a,"minimized",this.jg);this.N(a,"onStateChange",this.WE)},p6=function(a){g.pN.call(this,a);
this.i=new o6(this.player);this.i.hide();g.fN(this.player,this.i.element,4);a.Be()&&(this.load(),g.N(a.getRootNode(),"ytp-player-minimized",!0))};
g.w(o6,g.V);g.k=o6.prototype;
g.k.kD=function(){this.tooltip=new g.LQ(this.player,this);g.J(this,this.tooltip);g.fN(this.player,this.tooltip.element,4);this.tooltip.scale=.6;this.pc=new g.kO(this.player);g.J(this,this.pc);this.wg=new g.V({D:"div",K:"ytp-miniplayer-scrim"});g.J(this,this.wg);this.wg.Ba(this.element);this.N(this.wg.element,"click",this.bz);var a=new g.V({D:"button",Ea:["ytp-miniplayer-close-button","ytp-button"],U:{"aria-label":"Close"},S:[g.pL()]});g.J(this,a);a.Ba(this.wg.element);this.N(a.element,"click",this.xi);
a=new g.L1(this.player,this);g.J(this,a);a.Ba(this.wg.element);this.Uo=new g.V({D:"div",K:"ytp-miniplayer-controls"});g.J(this,this.Uo);this.Uo.Ba(this.wg.element);this.N(this.Uo.element,"click",this.bz);var b=new g.V({D:"div",K:"ytp-miniplayer-button-container"});g.J(this,b);b.Ba(this.Uo.element);a=new g.V({D:"div",K:"ytp-miniplayer-play-button-container"});g.J(this,a);a.Ba(this.Uo.element);var c=new g.V({D:"div",K:"ytp-miniplayer-button-container"});g.J(this,c);c.Ba(this.Uo.element);this.pL=new g.IP(this.player,
this,!1);g.J(this,this.pL);this.pL.Ba(b.element);b=new g.FP(this.player,this);g.J(this,b);b.Ba(a.element);this.nextButton=new g.IP(this.player,this,!0);g.J(this,this.nextButton);this.nextButton.Ba(c.element);this.zg=new g.yQ(this.player,this);g.J(this,this.zg);this.zg.Ba(this.wg.element);this.Jc=new g.NP(this.player,this);g.J(this,this.Jc);g.fN(this.player,this.Jc.element,4);this.Py=new g.V({D:"div",K:"ytp-miniplayer-buttons"});g.J(this,this.Py);g.fN(this.player,this.Py.element,4);a=new g.V({D:"button",
Ea:["ytp-miniplayer-close-button","ytp-button"],U:{"aria-label":"Close"},S:[g.pL()]});g.J(this,a);a.Ba(this.Py.element);this.N(a.element,"click",this.xi);a=new g.V({D:"button",Ea:["ytp-miniplayer-replay-button","ytp-button"],U:{"aria-label":"Close"},S:[g.uL()]});g.J(this,a);a.Ba(this.Py.element);this.N(a.element,"click",this.gU);this.N(this.player,"presentingplayerstatechange",this.Ic);this.N(this.player,"appresize",this.ub);this.N(this.player,"fullscreentoggled",this.ub);this.ub()};
g.k.show=function(){this.yd=new g.Bq(this.Np,null,this);this.yd.start();this.dg||(this.kD(),this.dg=!0);0!==this.player.getPlayerState()&&g.V.prototype.show.call(this);this.Jc.show();this.player.unloadModule("annotations_module")};
g.k.hide=function(){this.yd&&(this.yd.dispose(),this.yd=void 0);g.V.prototype.hide.call(this);this.player.Be()||(this.dg&&this.Jc.hide(),this.player.loadModule("annotations_module"))};
g.k.va=function(){this.yd&&(this.yd.dispose(),this.yd=void 0);g.V.prototype.va.call(this)};
g.k.xi=function(){this.player.stopVideo();this.player.Ma("onCloseMiniplayer")};
g.k.gU=function(){this.player.playVideo()};
g.k.bz=function(a){if(a.target===this.wg.element||a.target===this.Uo.element)g.T(this.player.T().experiments,"kevlar_miniplayer_play_pause_on_scrim")?g.sK(this.player.vb())?this.player.pauseVideo():this.player.playVideo():this.player.Ma("onExpandMiniplayer")};
g.k.jg=function(){g.N(this.player.getRootNode(),"ytp-player-minimized",this.player.Be())};
g.k.jd=function(){this.Jc.Rb();this.zg.Rb()};
g.k.Np=function(){this.jd();this.yd&&this.yd.start()};
g.k.Ic=function(a){g.U(a.state,32)&&this.tooltip.hide()};
g.k.ub=function(){g.YP(this.Jc,0,this.player.Za().getPlayerSize().width,!1);g.PP(this.Jc)};
g.k.WE=function(a){this.player.Be()&&(0===a?this.hide():this.show())};
g.k.dc=function(){return this.tooltip};
g.k.Le=function(){return!1};
g.k.jf=function(){return!1};
g.k.di=function(){return!1};
g.k.Kz=function(){};
g.k.Om=function(){};
g.k.wr=function(){};
g.k.fn=function(){return null};
g.k.gj=function(){return new g.ol(0,0,0,0)};
g.k.handleGlobalKeyDown=function(){return!1};
g.k.handleGlobalKeyUp=function(){return!1};
g.k.Vp=function(a,b,c,d,e){var f=0,h=d=0,l=g.Nl(a);if(b){c=g.Lq(b,"ytp-prev-button")||g.Lq(b,"ytp-next-button");var m=g.Lq(b,"ytp-play-button"),n=g.Lq(b,"ytp-miniplayer-expand-watch-page-button");c?f=h=12:m?(b=g.Ll(b,this.element),h=b.x,f=b.y-12):n&&(h=g.Lq(b,"ytp-miniplayer-button-top-left"),f=g.Ll(b,this.element),b=g.Nl(b),h?(h=8,f=f.y+40):(h=f.x-l.width+b.width,f=f.y-20))}else h=c-l.width/2,d=25+(e||0);b=this.player.Za().getPlayerSize().width;e=f+(e||0);l=g.Of(h,0,b-l.width);e?(a.style.top=e+"px",
a.style.bottom=""):(a.style.top="",a.style.bottom=d+"px");a.style.left=l+"px"};
g.k.showControls=function(){};
g.k.Sk=function(){};
g.k.qk=function(){return!1};g.w(p6,g.pN);p6.prototype.create=function(){};
p6.prototype.Ji=function(){return!1};
p6.prototype.load=function(){this.player.hideControls();this.i.show()};
p6.prototype.unload=function(){this.player.showControls();this.i.hide()};g.AN.miniplayer=p6;})(_yt_player);
