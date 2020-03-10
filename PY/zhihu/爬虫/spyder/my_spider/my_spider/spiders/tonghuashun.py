# -*- coding: utf-8 -*-
import scrapy


class TonghuashunSpider(scrapy.Spider):
    name = 'tonghuashun'
    allowed_domains = ['stockpage.10jqka.com.cn']
    start_urls = ['http://basic.10jqka.com.cn/600004/company.html']

    def parse(self, response):

        res_selector = response.xpath("//*[@id=\"ml_001\"]/table/tbody/tr[1]/td[1]/a/text()")
        name=res_selector.extract()

        print(name)
        pass
